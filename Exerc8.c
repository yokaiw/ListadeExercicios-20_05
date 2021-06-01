#include <stdio.h>
/*
Faça um algoritmo que solicita ao usuário três números e exibe na tela apenas o menor deles
(considere que o usuário irá digitar três números diferentes).
*/

int main(){
    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

     printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    if( numero1 > numero2 && numero1 > numero3){
        printf("%d", numero1);
    }
    else if(numero2 > numero1 && numero2 >numero3){
        printf("%d", numero2);
    }
    else{
      printf("%d", numero3);
    }
    
    return 0; 
}