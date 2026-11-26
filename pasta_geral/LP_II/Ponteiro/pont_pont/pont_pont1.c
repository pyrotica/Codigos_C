#include <stdio.h>
float mediana (int **PP, int cont){
    float mediaf;
    mediaf=(float)(**PP)/cont;
    return mediaf;
}

int main()
{
    int nums[5];
    int i, soma=0;
    int *psoma=&soma;
    int **pp=&psoma;
    int *p = nums;
    int cont=0;
    float media=0;
    float *pmedia;
    float **ppp;

    printf("Digita a cadeia de 5 numeros inteiros:\n");
    for(i=0;i<5;i++){
        scanf("%d", p);
        cont++;
        **pp+=*p;
        p++;
    }
    p=nums;
    media=mediana(pp, cont);
    pmedia=&media;
    ppp=&pmedia;
    printf("\n");
    printf("Numeros digitados: \n");
    for (i=0;i<5;i++){
        printf("num %d: %d - endereço: %p\n", i+1, *p, (void*)p);
        p++;
    }
    printf("\nSoma dos numeros digitados: %d - endereço: %p\n",  **pp, (void*)*pp);
    printf("\nMedia dos numeros digitados: %.2f - endereço: %p\n",  **ppp, (void*)*ppp);
    return 0;
}