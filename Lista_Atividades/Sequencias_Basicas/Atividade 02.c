#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que leia o nome e o sálario de um funcionário, mostrando no final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
*/
int main(){

    char nome[30], mes[10];
    float salario;

    printf("Qual o nome do funcionário ?\n");
    scanf("%[^\n]", &nome);


    printf("Qual o salário do funcionário ?\n");
    scanf("%f", &salario);

    printf("Mes do recebimento do salário\n");
    scanf("%s", &mes);


    printf("O funcionário(a) %s tem um salário de R$%.2f em %s.", nome, salario, mes);



    return 0;
}