#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, *arm;
    int quant=0;
    int armazem[99999];
    int i, e=0;
    p=armazem;
    
    do{
        printf("Digite 0 -  para encerrar o codigo", e+1);
        printf("\nDigite o %d° numero: ", e+1);
        scanf("%d", p);
        printf("\n\n");
        e++;
       if(*p==0){
           break;
       }
        p++;
        quant++;
    }while(1);
    p=armazem;
    e=0;
    for (i=0; i<quant; i++){
        printf("%d° numero digitado: %d\n", e+1, *p);
        p++;
        e++;
    }
    return 0;
}