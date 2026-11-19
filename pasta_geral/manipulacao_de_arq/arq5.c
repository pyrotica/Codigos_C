#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arqi;
    char mensagem[100];
    char cact;
    
    
    arqi=fopen("arq.txt", "w");
    
    if (arqi==NULL){
        printf("Erro em abrir o arquivo");
        return 1;
    }
    printf("Digite (0) para encerrar o codigo\nDigite a vossa mensagem: ");
    
    while(1){
        scanf(" %c", &cact);
        if(cact=='0'){
            break;
        }
        fputc(cact, arqi);
        printf("mensagem: ");
        
        if (fgets(mensagem, sizeof(mensagem), stdin) == NULL){
            break;
        }
        
        fprintf(arqi, "%s", mensagem);
    }
    fclose(arqi);
    arqi = fopen("arq.txt", "r");
    if(arqi == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    while((cact = fgetc(arqi)) !=EOF){
        putchar(cact);
    }
    fclose(arqi);
    return 0;
}