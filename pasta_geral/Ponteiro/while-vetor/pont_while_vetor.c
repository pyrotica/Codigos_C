#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *end;
    int armazem[6];
    int i, e=0;
    
    end=armazem+6;
    p=armazem;

    while(p<end){
        printf("Digite o %d° numero: ", e+1);
        scanf("%d", p);
        printf("\n");
        p++;
        e++;
    }
    p=armazem;
    for(i=0; i<6; i++){
        printf("o %d° numero digitado é: %d\n", i+1, *p);
        p++;
    }
    return 0;
}