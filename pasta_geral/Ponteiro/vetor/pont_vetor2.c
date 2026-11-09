#include <stdio.h>
int main()
{
   int v[3]={2,4,6};
   int *arm[3]={v,v+1,v+2};
   int **pp = arm;
   printf("pre\n\n");
   printf("dado: %d", v[0]);
   printf("\ndado: %d", v[1]);
   printf("\ndado: %d\n\n", v[2]);
   **pp=10;
   printf("pre **pp=10\n\n");
   printf("dado: %d", v[0]);
   printf("\ndado: %d", v[1]);
   printf("\ndado: %d\n\n", v[2]);
   pp++;
   
   **pp=20;
   printf("pre **pp=20\n\n");
   printf("dado: %d", v[0]);
   printf("\ndado: %d", v[1]);
   printf("\ndado: %d\n\n", v[2]);
   *(pp+1)=v;
   printf("pre *(pp+1)=v\n\n");
   printf("dado: %d", v[0]);
   printf("\ndado: %d", v[1]);
   printf("\ndado: %d\n\n", v[2]);
   **(pp+1)=30;
 
    printf("pos\n\n");

   printf("dado: %d", v[0]);
   printf("\ndado: %d", v[1]);
   printf("\ndado: %d", v[2]);
  
   return 0;
}