#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[10];
    int i;
    float *p=vet;
    
    for (i=0; i<10; i++){
        printf("Digite o valor da casa %d: ",i+1);
        scanf("%d", p+i);
        printf("\n");
    }
        printf("\n");
    for (i=0; i<10; i++){
        printf("O endereçamento da casa %d: %p \n",i+1, p);
        p++;
    }

    return 0;
}