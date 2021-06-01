#include <stdio.h>
/*
Faça um algoritmo que solicita ao usuário uma letra (caracter) e exiba uma mensagem informando se
é uma vogal ou uma consoante.
*/

int main(){
   char vogal;

   printf("Digite uma letra para ver se e consoante ou vogal:");
   scanf(" %c", &vogal);

   if( vogal == 'a' || vogal =='e' || vogal =='i' || vogal=='o' || vogal == 'u'){
       printf("A letra digitada e vogal ");
   }
   else{
       printf("A letra digitada e consoante ");
   }    
 return 0;   
}

