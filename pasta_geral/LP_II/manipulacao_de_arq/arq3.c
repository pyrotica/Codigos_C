#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *arqI, *arqF;
    int caract;
    char nome_arq[100];
    
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arq); // Removido o '&'
    printf("\n");

    // 1. Abre o arquivo digitado pelo usuário no modo LEITURA ("r")
    arqI = fopen(nome_arq, "r");
    if (arqI == NULL) {
        printf("Erro ao abrir arquivo %s.\n", nome_arq);
        return 1; // Não chame fclose se o arquivo for NULL
    }

    // 2. Cria um arquivo temporário no modo ESCRITA ("w")
    arqF = fopen("temp.txt", "w");
    if (arqF == NULL) {
        printf("Erro ao criar o arquivo temporario.\n");
        fclose(arqI);
        return 1;
    }

    // 3. Lê de arqI e escreve em arqF
    while ((caract = fgetc(arqI)) != EOF) {
        // Você também pode usar: caract = toupper(caract);
        if (caract >= 'a' && caract <= 'z') {
            caract = caract - 32;
        }
        fputc(caract, arqF); // Gravando no arquivo final (arqF)
    }
    
    // 4. Fecha ambos antes de remover e renomear
    fclose(arqI);
    fclose(arqF);

    remove(nome_arq);
    rename("temp.txt", nome_arq);
    
    printf("Arquivo '%s' foi modificado!\n", nome_arq);
    
    return 0;
}