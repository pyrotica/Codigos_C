#include <stdio.h>

int main()
{
   int v[5];
   int *p =v;
   int i;
   
    for (i=0; i<5; i++){
        printf("Digite o valor da casa %d: ",i+1);
        scanf("%d", p+i);
         printf("\n");
    }
    i=0;
    *(p+i);
    for(i=0;i<5;i++){
        printf("%d° valor digitado: %d\n",i+1, *p);
        *(p+i);
        p++;
    }
   return 0;
}