
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a=5,b=10,c=15;
   int *arm[3]={&a, &b, &c};
   
   *arm[0]=20;
   *arm[2]= *arm[1]+7;
   arm[1]=&a;
   *arm[1]=30;
   printf("Primeiro dado: %d", *arm[0]);
   printf("\nsegundo dado: %d", *arm[1]);
   printf("\nultimo dado: %d", *arm[2]);
   return 0;
}