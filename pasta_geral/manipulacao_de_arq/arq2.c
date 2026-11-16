#include <stdio.h>
int main()
{
    FILE *arq;
    int passo, temp, vet[5];
    char nome_arq[20];
    printf("Digite o nome do arquivo: ");
    scanf("%s",&nome_arq);
    printf("\n");
    if ( (arq = fopen(nome_arq, "w+")) == NULL) {
        fprintf(stderr, "Erro ao abrir arquivo %s.", nome_arq);
    return 1;
    }
    printf("Digite os 5 numeros inteiros: \n");
    /* escrevendo números no arquivo */
    for (passo = 0; passo < 5; passo++) {
        scanf("%d", &temp);
        fprintf(arq, "%d", temp);
        if (passo < 4){
            
         fprintf(arq, "\n");
        }
    }
    /* lendo dados do arquivo, armazenando em um vetor e imprimindo no monitor */
    rewind(arq);
    
    printf("\nValores lido no arquivo e guardando no vetor");
    for(passo=0;passo<5;passo++){
        fscanf(arq, "%d", &vet[passo]);
        printf("vet[%d] = %d\n", passo, vet[passo]);
    }
    fclose(arq);
}