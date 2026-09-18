#include <stdio.h>
#include <stdlib.h>

/*
A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva 
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a 
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, 
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.
*/

int main(){
    
    float kms_pecorridos, km_rodado = 0.20, dias_alugados, dia = 90;;

    printf("Informe a quantidade de Kms pecorridos pelo carro:\n");
    scanf("%f", &kms_pecorridos);

    printf("Informe a quantidade de dias que o carro foi alugado:\n");
    scanf("%f", &dias_alugados);

    float valor_km = km_rodado * kms_pecorridos;
    float valor_dias = dia * dias_alugados;

    printf("O valor total pelo aluguel do carro ficou R$%.2f\n", valor_dias + valor_km);
    return 0;
}