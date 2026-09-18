#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento
*/

int main(){

    float salario, aumento = 0.15;

    printf("Digite seu salário: \n");
    scanf("%f", &salario);

    float promocao = salario * aumento;

    printf("Aumento no salario foi de R$%.2f\n", promocao);
    printf("O valor total do salário apos a promoção foi R$%.2f\n", salario + promocao);

    return 0;
}