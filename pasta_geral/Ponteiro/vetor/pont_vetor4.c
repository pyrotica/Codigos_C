#include <stdio.h>
int main()
{
   int m[2][3]={{1,2,3}, {4,5,6}};
   int (*p)[3]=m;
   
  *(*(p+1)+2)=60;
   *(*p+1)=20;
   p++;
   (*p)[0]=40;
   
   printf("linha 0: %d, %d, %d", m[0][0], m[0][1], m[0][2]);
   printf("\nlinha 1: %d, %d, %d", m[1][0], m[1][1], m[1][2]);
   return 0;
}