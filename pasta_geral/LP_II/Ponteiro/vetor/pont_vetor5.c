#include <stdio.h>
int main()
{
  int v[6]={10,20,30,40,50,60};
  int *p;
  int *q;
 int auxi;
 int i;
 p=&v[0];
 q=&v[5];
  
  printf("normal:");
  for (i=0; i<6; i++){
    printf(" %d ", v[i]);
  }
  for(i=0;i<3;i++){
      auxi=*(p+i);
      *(p+i)=*(q-i);
      *(q-i)=auxi;
  }
 printf("\n\n");
 printf("invertido:");
  for (i=0; i<6; i++){
    printf(" %d ", v[i]);
  }
  
  
 
   return 0;
}