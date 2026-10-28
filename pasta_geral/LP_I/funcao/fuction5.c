
#include <stdlib.h>
#include <stdio.h>

int medianas_matrix(int alunos, int notas, int m[alunos][notas] ){
    float media;
    int soma_total=0;
    int i, j;
    for (i=0; i<alunos; i++){
        for (j=0; j<notas; j++){
            soma_total+=m[i][j];
        }
        media=soma_total/3;
    }
    return media;
    
}
int main()
{
    int i, j;
    int matriz[3][3];
    float media_total;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Digite a %d° nota do aluno %d: ",j+1, i+1);
            scanf("%d", &matriz[j][i]);
        }
        printf("\n");
    }
    media_total=medianas_matrix(3, 3, matriz);
    printf("A media total da sala foi de: %.2f", media_total);

    return 0;
}
