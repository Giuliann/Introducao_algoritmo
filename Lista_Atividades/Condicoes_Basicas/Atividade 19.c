#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou 
ÍMPAR
*/

int main(){

    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if((num % 2) == 0){
        printf("Par\n");
    }else{
        printf("Impar\n");
    }

    return 0;
}