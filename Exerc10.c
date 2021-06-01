#include <stdio.h>
/*
Faça um algoritmo que solicite o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00
mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.
*/

int main(){
    float salarioFixo,valorVendas,salarioTotal;
    float comissao= 0.03, acrescimo=0.05;

    printf("Digite o valor do seu salario fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite o valor das vendas: ");
    scanf("%f", &valorVendas);

    if(valorVendas > 1500 ){
       salarioTotal = salarioFixo + (1500 * comissao) + ((valorVendas - 1500)* 0.05);
    }
    else{
         salarioTotal = salarioFixo + (valorVendas * comissao);
    }
    printf("%.2f", salarioTotal);

   return 0;
}

/*
#include <stdio.h>
#include <stdbool.h>
int main(){
    float salarioFixo, totalVendasMes;
    float salarioTotal;
    float comissao3Porcento;
    float comissao5Porcento;
    printf("Digita ai o seu salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digita ai quanto voce vendeu esse mes: ");
    scanf("%f", &totalVendasMes);
    if(totalVendasMes > 0 && totalVendasMes <= 1500){
        comissao3Porcento = totalVendasMes * 0.03;
        comissao5Porcento = 0;
    }else if(totalVendasMes > 1500){
        comissao3Porcento = 45;

        comissao5Porcento = (totalVendasMes - 1500) * 0.05;
    }else{
        comissao3Porcento = 0;

        comissao5Porcento = 0;
    }
    salarioTotal = salarioFixo + comissao3Porcento + comissao5Porcento;
    printf("O salario final eh de: R$%.2f, pois as comissoes foram de: R$%.2f", salarioTotal, comissao3Porcento + comissao5Porcento);
    return 0;
}

*/