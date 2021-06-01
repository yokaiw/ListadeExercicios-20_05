#include <stdio.h>
/*
Faça um algoritmo que solicita ao usuário um número inteiro e exiba este número na tela. Se o
número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
Resolucao professor: 

int main(){
    int numero; 
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero < 0){
        numero = numero * - 1;
    }
    printf("%d", numero);
    return 0;
}
*/
int main(){
   
   int numero1;

   printf("Digite um numero inteiro:  ");
   scanf("%d", &numero1);
   printf("O numero que voce digitou e: %d \n  ", numero1);

   if( numero1 < 0 ){

      numero1 = -numero1;

      printf("O numero inteiro negativo foi transformado em positivo: %d ", numero1);
   }

  return 0;
}
