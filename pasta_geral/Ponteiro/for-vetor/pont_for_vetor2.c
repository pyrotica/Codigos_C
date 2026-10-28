#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10]={0,1,2,3,4,5,6,7,8,9}, i;
    int *p;
    int count_par=0;
    int count_impar=0;

    p=vetor;
    for(i=0;i<10;i++){
        if(*p %2==0){
            count_par++;
        }else{
            count_impar++;
        }
        p++; 
    }
    printf("A quantidade de pares é de: %d\nAquantidade de impares é de: %d",count_par,count_impar);

    return 0;
}