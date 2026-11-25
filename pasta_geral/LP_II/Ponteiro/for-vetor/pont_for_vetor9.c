#include <stdio.h>
int main()
{
  int v[5]={10,20,30,40,50};
  int *p;
  int i;
  p=&v[0];
  
  for (i=0; i<5; i++){
    printf("valor %d: %d\n",i+1, *p);
    *p++;
  }
  p=v;
  *(p+2)=90;

*(p+4)=*(p+4)*2;
  printf("\n");
  for (i=0; i<5; i++){
    printf("valor %d: %d\n",i+1, *p);
    *p++;
  }
  
   return 0;
}