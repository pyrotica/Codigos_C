
#include <stdio.h>

int main()
{
    int nums[5];
    int i, soma=0;
    int *psoma=&soma;
    int **pp=&psoma;
    int *p = nums;

    printf("Digita a cadeia de 5 numeros inteiros:\n");
    for(i=0;i<5;i++){
        scanf("%d", p);
        **pp+=*p;
        p++;
    }
    p=nums;
    printf("\n");
    printf("Numeros digitados: \n");
    for (i=0;i<5;i++){
        printf("num %d: %d - endereço: %p\n", i+1, *p, *p);
        p++;
    }
    printf("\nSoma dos numeros digitados: %d\n",  **pp);

    

    return 0;
}