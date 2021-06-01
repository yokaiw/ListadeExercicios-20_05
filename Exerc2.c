#include <stdio.h>
/*
Faça um algoritmo que solicita ao usuário as notas de três provas. Calcule a média aritmética e
informe se o aluno foi Aprovado ou Reprovado (o aluno é considerado aprovado com a média igual
ou superior a 6).
*/

int main(){
    int nota1, nota2, nota3, media; 

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
 
    media = (nota1 + nota2 + nota3) / 3;

    if( media >= 6 ){
        printf("Voce foi aprovado! ");
    }
    else if(media >= 0 && media < 6) {
         printf("Voce foi reprovado! ");
    }
    else{
        printf("Nota invalida! ");
    }
    return 0;
}
