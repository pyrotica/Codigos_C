#include <stdio.h>
#include <stdlib.h>

int main(){

   int num=8;
   int *p=&num;
   
   *p= *p +4;
   printf("%d", *p);
   
  *p= *p *2;
   printf("\n%d", *p);
  *p= *p -6;
   printf("\n%d", *p);
  
    return 0;
}