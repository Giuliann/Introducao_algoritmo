#include <stdlib.h>
#include <stdio.h>

/*
Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua 
situação em relação ao alistamento militar. 
   - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o 
alistamento. 
   - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do 
alistamento.
*/

int main(){

    int ano_nascimento, ano_atual = 2026, idade;

    printf("Digite o seu ano de nascimento:\n");
    scanf("%d", &ano_nascimento);

    idade = ano_atual - ano_nascimento;

    if(idade == 18){
        printf("Você deve se alistar esse ano\n");
    }
    else if (idade > 18){
        printf("Ja se passaram %d anos para o alistamento\n", idade - 18);
    }
    else{
        printf("Faltam %d anos para o alistamento\n", 18 - idade);
    }

    return 0;
}