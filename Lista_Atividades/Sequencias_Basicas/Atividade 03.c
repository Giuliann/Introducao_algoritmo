#include <stdio.h>
#include <stdlib.h>
/*
Desenvolva um Algoritmo que leia dois números inteiros e mostre o somatório entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13. 
*/
int main(){

    int a, b;
    printf("Somatorio de dois valores\n\n");

    printf("Digite o primeiro valor: \n");
    scanf("%d", &a);

    printf("Digite outro valor: \n");
    scanf("%d", &b);

    printf("A soma de %d e %d é igual a %d\n", a, b, (a + b));


    return 0;
}