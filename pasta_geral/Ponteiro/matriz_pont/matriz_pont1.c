#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[3][3];
    int i, j;
    float *p=&vet[0][0];
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
        printf("Digite o valor da casa [%d][%d]: ",i, j);
        scanf("%f", p + (i * 3) + j); 
        
        printf("\n");
            
        }
    }
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("O valor da casa [%d][%d]: %.0f (endereco: %p)\n", 
                   i, j, *(p + (i * 3) + j), (void *)(p + (i * 3) + j));
        }
    }

    return 0;
}