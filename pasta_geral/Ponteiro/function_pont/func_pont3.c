#include <stdio.h>
#include <stdlib.h>

int dobro(int *A, int *B){
    int dA = (*A)*2;
    int dB = (*B)*2;
    return  dA+dB;
}

int main()
{
    int a, b;
    int soma;
    printf("Digite os 2 valores: \n");
    scanf("%d %d", &a, &b);
    printf("\n");
    soma=dobro(&a, &b);
    printf("A soma dos dobros de A e B é: %d", soma);
    return 0;
}