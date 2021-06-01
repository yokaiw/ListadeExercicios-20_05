#include <stdio.h>
/*
Faça um algoritmo que solicita ao usuário três valores correspondentes aos lados de um triângulo.
Informe se o triângulo é equilátero (possui 3 lados iguais), isósceles (possui dois lados iguais) ou
escaleno (não possui lados iguais).
*/

int main(){
   int lado1,lado2,lado3;

   printf("Digite o valor do primeiro lado: ");
   scanf("%d", &lado1);

   printf("Digite o valor do segundo lado: ");
   scanf("%d", &lado2);

   printf("Digite o valor do terceiro lado: ");
   scanf("%d", &lado3);

   if(lado1 == lado2 && lado2 == lado3 && lado1 == lado3){
       printf("O triangulo e equilatero");
   }
   else if( lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
       printf("O triangulo e escaleno");
   }
    else{
        printf("O triangulo e isosceles");
    }
    return 0;
}