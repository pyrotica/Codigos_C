//while do - funcionarios A B C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   float salario_minimo=1621, salario_total;
   char sexo[2], opcd[2];
   int quant, contH=0, contM=0, total_pecas, code;


    do{
        printf("Digite a quantidade de peças que o mesmo produziu: ");
        scanf("%d",&quant);
        printf("Digite o sexo do funcionario: ");
        scanf("%s",&sexo);
     
        if(sexo=="M" || sexo=="m"){
            contH+=1;
        }
        if(sexo=="F" || sexo=="f"){
            contM+=1;
        }
        
        if(quant<=30){
        salario_total+=salario_minimo;
        }
        if(quant>=31 && quant<=35){
            salario_total+=(salario_minimo*1.03);
        }
        if(quant>35){
          salario_total+=(salario_minimo*1.05);    
        }
        printf("\tDigite zero (0) para parar o codigo\n\n");
        scanf("%d",&code);
    }
        while (code=!0);
            
            printf("\no fim");
         
        
 
    return 0;
}
