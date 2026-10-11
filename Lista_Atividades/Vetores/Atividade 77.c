#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia 15 números e guarde-os em um vetor. No final, 
mostre o vetor inteiro na tela e em seguida mostre em que posições foram 
digitados valores que são múltiplos de 10.
*/

int main(){

    int vetor[15], i;

    printf("Digite 15 números:\n");

    for(i = 0; i < 15; i++){
        printf("Digite o valor[%d]\n", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 15; i++){
        printf("%d\n", vetor[i]);
    }

    printf("\n\nNumeros multiplos de 10: \n");
    for(i = 0; i < 15; i++){
        if(vetor[i] % 10 == 0){
            printf("%d indice: %d\n", vetor[i], i);
        }
    }

    return 0;
}