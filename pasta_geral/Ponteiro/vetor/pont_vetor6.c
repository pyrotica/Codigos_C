#include <stdio.h>

int main()
{
   int v[3] = {10, 20, 30};
   int *p = v;
   int **pp=&p;
   p=v+3;
   printf("\nPre-Valores: %d, %d, %d", v[0], v[1], v[2]);
//   *(v+3)=50; //esse codigo viola os conteudos dentro do v, que impede a impressão do codigo
   *pp=v+1;
   **pp=40;
   pp++; //v++ esta invalido por conta que ele so deve avançar  o vetor em uma estrutura valida
   printf("\nPos-Valores: %d, %d, %d", v[0], v[1], v[2]);
   return 0;
}