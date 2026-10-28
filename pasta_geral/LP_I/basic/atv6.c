#include <stdio.h>
#include <stdlib.h>

int main(){
 float  varTotal, varDesc;
 char opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &varTotal);
    printf("\n\nA - avista em dinheiro ou pix - 15 porcento de desconto\n");
    printf("B - avista em cartão - 5 porcento de desconto\n");
    printf("C - Duas vezes sem juros - preço normal\n");
    printf("D - Mais de duas vezes - Juros de 10%\n");
 printf("Digite uma opção:");
 scanf(" %c", &opcao);
   if(opcao=='A' || opcao =='a'){
       varDesc=varTotal-(varTotal*0.15);
       printf("\no valor a ser pago eh: %.2f", varDesc);
   }else if (opcao=='B' || opcao =='b'){
       varDesc=varTotal-(varTotal*0.05);
       printf("\no valor a ser pago eh: %.2f", varDesc);
    }else if(opcao=='C' || opcao =='c'){
        varDesc=varTotal/2;
        printf("\no valor a ser pago eh %.2f 2 vezes", varDesc);
    }else if(opcao='D' || opcao =='d'){
               varDesc=varTotal+(varTotal*0.10);
        printf("\no valor a ser pago em mais vezes, eh de: %.2f", varDesc);
    }else{
        printf("Opção Invalida");
    }

    return 0;
}
