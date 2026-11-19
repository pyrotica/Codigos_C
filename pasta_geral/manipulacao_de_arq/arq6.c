#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nomearq[100];
    int vogCount=0;
    char car;
   
    FILE *arq = fopen ("ronaldo.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    while((car = fgetc(arq)) !=EOF){
        if(car=='a' || car=='A' || car=='e' || car=='E' || car=='i' || car=='I' || car=='o' || car=='O' || car=='u' || car=='U'){
            vogCount++;
        }
    }
    fclose(arq);
    
    printf("O arquivo tem %d vogais", vogCount);
    return 0;
}