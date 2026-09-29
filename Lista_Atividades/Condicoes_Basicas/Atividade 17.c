#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade 
dela e depois mostre se ela pode ou não votar
*/

int main(){

    int ano_nascimento, ano_atual = 2026;

    printf("Informe seu ano de nascimento:\n");
    scanf("%d", &ano_nascimento);

    if((ano_atual - ano_nascimento) < 18){
        printf("Voce nao pode votar!\n");
    }
    else{
        printf("Voce deve ir votar!\n");
    }

    return 0;
}