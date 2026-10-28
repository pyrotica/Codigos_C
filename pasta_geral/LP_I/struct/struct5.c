#include <stdlib.h>
#include <stdio.h>

    struct Aluno{
        char nome[50];
        int matricula;
        int idade;
    }indi;
int main()
{
    struct Aluno indi[3];
    int i;
    for (i=0; i<3; i++){
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]", indi[i].nome);
        
        printf("\nDigite a matricula do aluno %d: ", i+1);
        scanf("%d", &indi[i].matricula);
        
        printf("\nDigite a idade do aluno %d: ", i+1);
        scanf("%d", &indi[i].idade);
    }
    for(i=0; i<3; i++){
        printf("\nAluno %d", i+1);
        printf("\nNome do aluno %d: %s",i+1,indi[i].nome);
        printf("\nMatricula do aluno %d: %d",i+1,indi[i].matricula);
        printf("\nIdade do aluno %d: %d",i+1,indi[i].idade);
        printf("\n---------------------\n\n");
    }
    return 0;
}
