#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que leia o número de dias trabalhados em um mês e mostre o 
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 
por hora trabalhada
*/

int main(){

    float dias_trabalhados, horas = 8, hora_trabalhada = 25;

    printf("Quantos dias o funcionário trabalhou:\n");
    scanf("%f", &dias_trabalhados);

    float salario_diario = horas * hora_trabalhada;


    printf("O valor do total do salário é: R$%.2f\n", salario_diario * dias_trabalhados);

    return 0;
}