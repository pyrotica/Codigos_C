#include <stdio.h>

int main(){
    FILE *arquivo;
    char mensagem[100];
    int caract; // Alterado para int, pois fgetc retorna int (incluindo EOF)

    arquivo = fopen("dados.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo \n");
        return 1;
    }
    
    printf("Digite -0- para encerrar o codigo\n");
    while(1){
        printf("Mensagem: ");
        
        // Corrigido de fputc para fgets para ler a string de stdin
        if (fgets(mensagem, sizeof(mensagem), stdin) == NULL) {
            break;
        }

        if(mensagem[0] == '0' && 
            (mensagem[1] == '\n' || mensagem[1] == '\0')){
            break;
        }

        fprintf(arquivo, "%s", mensagem);
    }
    fclose(arquivo);

    arquivo = fopen("dados.txt", "r"); 

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo \n");
        return 1;
    }

    printf("\nConteudo armazenado no arquivo: \n");
    while((caract = fgetc(arquivo)) != EOF){
        putchar(caract);
    }

    fclose(arquivo);

    return 0;
}