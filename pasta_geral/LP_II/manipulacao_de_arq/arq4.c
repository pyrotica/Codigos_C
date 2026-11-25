#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nomearq[100];
    int LinCount=0;
    char car;
   
    FILE *arq = fopen ("ronaldo.txt", "r");
    if(arq == NULL){
        printf("Erroa ao abrir o arquivo");
        return 1;
    }
    while((car = fgetc(arq)) !=EOF){
        if(car=='\n'){
            LinCount++;
        }
    }
    fclose(arq);
    
    printf("O arquivo tem %d linhas", LinCount);
    return 0;
}