#include <stdlib.h>
#include <stdio.h>

/*
Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando 
na tela uma das mensagens abaixo: 
   - O primeiro valor é o maior 
   - O segundo valor é o maior 
   - Não existe valor maior, os dois são iguais 
*/

int main(){

    int num1, num2;

    printf("Informe o primeiro valo:\n");
    scanf("%d", &num1);

    printf("Informe o segundo valor:\n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O primeiro valor é maior sendo: %d > %d\n", num1, num2);
    }
    else if (num2 > num1){
        printf("O segundo valor é maior sendo: %d > %d\n", num2, num1);
    }
    else{
        printf("Nao existe valor maior sendo: %d = %d\n", num1, num2);
    }
    



    return 0;
}