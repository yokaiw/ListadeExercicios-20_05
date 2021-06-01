#include <stdio.h>
/*
Faça um algoritmo que solicite dois números ao usuário e exiba apenas o maior deles. Caso eles sejam
iguais exiba a mensagem “Números Iguais”.
*/
int main (){
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if( numero1 > numero2){
        printf("%d ", numero1);
    }
    else if(numero2 > numero1){
        printf("%d", numero2);
    }
    else{
        printf("Os numeros sao iguais");
    }
    return 0;
}