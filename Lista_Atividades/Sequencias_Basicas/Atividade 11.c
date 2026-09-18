#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO PROMOCIONAL, com 5% de desconto.
*/

int main(){

    float preco, promocao = 0.05;

    printf("Informe o preço do prodito: \n");
    scanf("%f", &preco);

    float desconto = preco * promocao;

    printf("Valor do desconto: R$%.2f\n",  desconto);
    printf("O preço promocional ficou R$%.2f\n", preco - desconto);

    return 0;
}