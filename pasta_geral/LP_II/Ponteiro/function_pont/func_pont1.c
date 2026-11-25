#include <stdio.h>
#include <stdlib.h>

int trocatroca(int *A, int *B){
    int guard = *A;
    *A = *B;
    *B = guard;
    return *A, *B;
}

int main()
{
    int *B, *A;
    printf("Digite os 2 valores: \n");
    scanf("%d %d", A, B);
    printf("\n");
    trocatroca(A, B);
    printf("O novo a valor de A é: %p - %d\n", A, *A);
    printf("O novo a valor de B é: %p - %d", B, *B);

    return 0;
}