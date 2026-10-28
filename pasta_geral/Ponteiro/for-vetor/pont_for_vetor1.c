#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int *p;
    int vetor[5];
    int soma=0;
    for (i=0; i<5; i++){
        printf("Digite o valor da casa %d: ",i);
        scanf("%d", &vetor[i]);
        // printf("");
    }
    p=vetor;
    for(i=0;i<5;i++){
        soma+=*p;
        p++;
    }
    
    printf("\nAsoma do vetor é de: %d", soma);
    return 0;
}