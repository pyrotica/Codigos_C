#include <stdio.h>
#include <stdlib.h>
int main()
{
   int v[6]={3,6,9,12,15,18};
   int *p =v;
   int i;
   
   p=v;
   printf("Pre-alterações\n\n");
    for(i=0;i<6;i++){
        printf("%d° valor do vetor: %d\n",i+1, *p);
        p++;
    }
   p=v;
    for (i=0; i<6;i++){
        *p= *p+5;
        p++;
    }
   
   p=v;
    printf("\n\nPos-alterações\n\n");
    for (i=0; i<6; i++){
        printf("%d° valor do vetor: %d\n",i+1, *p);
        *(p+i);
        p++;
    }
    
   return 0;
}