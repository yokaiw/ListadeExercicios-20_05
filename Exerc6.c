#include <stdio.h>
/*
Faça um algoritmo que solicita ao usuário dois números inteiros. O primeiro é o valor das horas e o
segundo dos minutos. Verifique se a hora é válida ou inválida e exiba uma mensagem correspondente
(São válidas as horas entre 00:00 e 23:59).
*/

int main(){
   int hora, minuto; 

   printf("Digite a hora: ");
   scanf("%d", &hora);

   printf("Digite os minutos: ");
   scanf("%d", &minuto);

   if((hora >= 0 && hora <= 23) && (minuto >= 0 && minuto <= 59)){
   printf("Hora valida ");
   }
   else{
       printf("Hora invalida ");
   }
    return 0;
}