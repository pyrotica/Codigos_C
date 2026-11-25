#include <stdio.h>
#include <stdlib.h>

int main(){

   int auxi;
   int a=15, b=28;
   int *p =&a, *q =&b;
      printf("\np=%d\nq=%d", *p, *q);

   auxi=*p;
   *p = *q;
   *q = auxi;
   printf("\n-----------------");
   printf("\np=%d\nq=%d", *p, *q);
    return 0;
}