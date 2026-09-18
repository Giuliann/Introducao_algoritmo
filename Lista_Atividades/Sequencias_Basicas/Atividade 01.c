#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas-vindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!
*/

int main(){
    
    char nome[30];

    printf("Qual o seu nome ?");
    scanf("%[^\n]", &nome);
    printf("Olá %s, é um prazer te conhecer", nome);

    return 0;
}