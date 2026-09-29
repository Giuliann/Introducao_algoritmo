#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia um determinado ano e mostre se ele é ou não 
BISSEXTO. 
*/

int main(){

    int ano;

    printf("Digite um ano:\n");
    scanf("%d", &ano);

    if((ano % 400) == 0){
        printf("O ano %d e Bissexto", ano);
    }else{
        printf("O ano %d nao e Bissexto");
    }

    return 0;
}