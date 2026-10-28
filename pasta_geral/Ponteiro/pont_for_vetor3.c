#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[10], B[10], C[10];
    int i;
    int *Pa, *Pb, *Pc;

   printf("Digite os valores do vetor A:\n");
   for (i =0; i<10; i++){
       printf("Digite o %d° valor: ",i+1);
       scanf("%d", &A[i]);
   }
   Pa=A;
   printf("\n\nDigite os valores do vetor B:\n");
   for (i =0; i<10; i++){
       printf("Digite o %d° valor: ",i+1);
       scanf("%d", &B[i]);
   }
   Pb=B;
   Pc=C;
   printf("\n\nDigite os valores do vetor C:\n");
   for (i=0;i<10; i++){
       *Pc=*Pa-*Pb;
       printf("%d° valor do vetor C: %d\n", i+1, *Pc);
       Pc++;
       Pa++;
       Pb++;
   }
    return 0;
}