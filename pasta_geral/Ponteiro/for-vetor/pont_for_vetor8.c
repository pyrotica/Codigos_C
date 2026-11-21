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
   
    for(i=0;i<5;i++){
        if (*(p + i) % 2 == 0){
        printf("%d° valor digitado: %d\n",i+1, *(p + i));
        }
    }
   return 0;
}