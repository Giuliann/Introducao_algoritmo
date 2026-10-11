#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses 
valores em dois vetores, em posições relacionadas. No final, mostre uma listagem 
contendo apenas os dados das pessoas menores de idade.
*/

int main(){

    char nome[9][15];
    int idade[9], i, j;

    printf("Informe nome e idade de 9 pessoas:\n");

    for(i = 0; i < 9; i++){
        printf("Informe os nomes: \n");
        scanf("%s", nome[i]);

        getchar();

        printf("Informe as idade: \n");
        scanf("%d", &idade[i]);
    }

    for(i = 0; i < 9; i++){
        if(idade[i] < 18){
            printf("Nome: %s | Idade: %d\n", nome[i], idade[i]);
        }
    }



    return 0;
}