#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor. 
No final, mostre quais são os números pares que foram digitados e em que 
posições eles estão armazenados
*/

int main(){

    int vetor[10], i;

    printf("Informe 10 valores\n");

    for(i = 0; i < 10; i++){
        printf("Informe o valor[%d]: \n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            printf("%d é par, indice[%d]\n", vetor[i], i);
        }
    }


    return 0;
}