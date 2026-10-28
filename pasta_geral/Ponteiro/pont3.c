#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int *p;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    p=&num;
    printf("\nValor apontado pelo ponteiro: %d", *p);
    
    printf("\n\n");
    
    printf("Digite o valor ao ser alterado no ponteiro: ");
    scanf("%d", p);
    
    printf("\n");
    
    printf("\nNovo valor da variavel 'num' original: %d\n", num);
    return 0;
}