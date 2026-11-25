#include <stdio.h>
#include <stdlib.h>

void maiormenor(int *A, int *B){
    if(*A>*B){
        printf("A: %d, é maior que B: %d", *A, *B);
    }else{
        printf("B: %d, é maior que A: %d", *B, *A);
    }
} 

int main()
{
    int *B, *A;
    printf("Digite os 2 valores: \n");
    scanf("%d %d", A, B);
    printf("\n");
    maiormenor(A, B);

    return 0;
}