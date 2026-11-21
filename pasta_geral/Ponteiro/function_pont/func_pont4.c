#include <stdio.h>
#include <stdlib.h>

int troca2(int *A, int *B){
    int soma = (*A)+(*B);
}

int main()
{
    int a, b;
    int soma;
    printf("Digite os 2 valores: \n");
    scanf("%d %d", &a, &b);
    printf("\n");
    soma=troca2(&a, &b);
    a=soma;
    printf("O valor de A é: %d\n", a);
    printf("O valor de b é: %d", b);
    return 0;
}