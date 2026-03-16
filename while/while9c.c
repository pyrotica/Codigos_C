//while de primo
#include <stdio.h>
#include <stdlib.h>
int main(){
   
    int senha_cadastrada=1234;
    int senha, tentativa=0;
    
   printf("Digite a sua senha: ");
   scanf("%d", &senha);
   
   while(senha==! senha_cadastrada){
       printf("Senha invalida\ntente novamente: ");
        scanf("%d", &senha);
        tentativa+=1;
        if(tentativa==3){
            printf("numero de tentativas ultrapassada");
            break;
        }
   }
   printf("Bem-Vindo");
    
    
    
    return 0;
}
