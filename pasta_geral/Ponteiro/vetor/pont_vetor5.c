
#include <stdio.h>
void avancar(int **pp){
    (*pp)++;
    **pp=**pp+10;
}
int main()
{
   int v[4]={1,2,3,4};
   int *p =v;
   printf("pre-Dados: %d, %d, %d, %d", v[0], v[1], v[2], v[3]);
   printf("\napontado por p: %d", *p);
   avancar(&p); // avança para casa 1 (2) -> (12)
   avancar(&p); // avança para cada 2 (3) -> (13)
   
   printf("\n\npos-Dados: %d, %d, %d, %d", v[0], v[1], v[2], v[3]);
   printf("\napontado por p: %d", *p);
   return 0;
}