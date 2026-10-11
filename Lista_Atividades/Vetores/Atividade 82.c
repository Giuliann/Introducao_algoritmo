#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números 
aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os 
números gerados e depois coloque o vetor em ordem crescente, mostrando no final 
os valores ordenados.
*/

int main(){

    srand(time(NULL));

    int vetor[20], i, j, receptor;

    for(i = 0; i < 20; i++){
        vetor[i] = rand() % 100;
    }
    
    printf("Valores Desordenados: \n");
    for(i = 0; i < 20; i++){
        printf("%d \n", vetor[i]);
    }

    for(i = 0; i < 20; i++){
        for(j = 0; j < 19; j++){
            if(vetor[j] > vetor[j + 1]){
                receptor = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = receptor;
            }
        }
    }

    printf("\n\nValores Ordenados: \n");
    for(i = 0; i < 20; i++){
        printf("%d\n", vetor[i]);
    }





    return 0;
}