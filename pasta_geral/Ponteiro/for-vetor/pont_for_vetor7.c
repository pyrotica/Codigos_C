#include <stdio.h>

int main()
{
   int v[5];
   int dv[5];
   int *p =v;
   int i;
   
    for (i=0; i<5; i++){
        printf("Digite o valor da casa %d: ",i+1);
        scanf("%d", p+i);
         printf("\n");
    }
    
    for(i=0;i<5;i++){
        *(p + i) = *(p + i) * 2;
    }
    for(i=0;i<5;i++){
        printf("%d° valor digitado: %d\n",i+1, *(p + i));
    }
   return 0;
}