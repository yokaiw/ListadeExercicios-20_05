#include <stdio.h>
/*
Faça um algoritmo que solicita um número inteiro e exibe uma mensagem indicando se ele é positivo,
negativo ou zero. 
*/

int main(){
     int numero1;

     printf("Digite o numero inteiro: ");
     scanf("%d", &numero1);

     if(numero1 > 0 ){
         printf("O numero e positivo");
     }
     else if(numero1 < 0){
         printf("O numero e negativo");
     }
     else{
         printf("O numero e zero");
     }

    return 0; 
}