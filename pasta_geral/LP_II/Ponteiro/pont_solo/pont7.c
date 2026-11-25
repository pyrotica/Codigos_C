#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q;
    
    printf("Digite os 2 valores: \n");
    scanf("%d %d", p, q);
    
    if(*p>*q){
        printf("o maior endereçamento é: %p", p);
    }else{
        printf("o maior endereçamento é: %p", q);

    }

    return 0;
}