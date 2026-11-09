#include <stdio.h>
int main()
{
   int v[4]={10,20,30,40};
   int *p=v;
   int (*pa)[4]=&v;
   printf("pre\ndado: %d", v[2]);
   (*pa)[2]=90;
   printf("\npos\ndado: %d", v[2]);
   return 0;
}