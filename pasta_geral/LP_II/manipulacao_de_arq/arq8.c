#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nomearq[100];
    int totalrep=0;
    char letra;
    char car;
   
   printf("Digite a letra que deseja analisar: ");
   scanf(" %c", &letra);
    FILE *arq = fopen ("ronaldo.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    while((car = fgetc(arq)) !=EOF){
        if(car==letra){
            totalrep++;
        }
        }
    
    fclose(arq);
    
    printf("O arquivo tem a letra %c repetida %d vezes ", letra, totalrep);
    return 0;
}