#include <stdio.h>
/*
Faça um algoritmo que solicita ao usuário um valor inteiro e exibe uma mensagem informando se o
número é par ou ímpar.
*/

int main(){
   int numero1; 

   printf("Digite o numero inteiro: ");
   scanf("%d", &numero1);
    
    if(numero1 % 2 == 0 ){
        printf("O numero e par! ");
    }
    else{
        printf("o numero e impar! ");
    }
    
  return 0;
}

