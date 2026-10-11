#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 
15 sorteados pelo computador. Depois disso, peça para o usuário digitar um 
número (chave) e seu programa deve mostrar em que posições essa chave foi 
encontrada. Mostre também quantas vezes a chave foi sorteada.
*/

int main(){

    srand(time(NULL));

    int vetor[30], i, num, cont = 0;

    for(i = 0; i < 30; i++){
        vetor[i] = (rand() % 15) + 1;
    }

    printf("Digite uma chave de 1 a 15: \n");
    scanf("%d", &num);

    for(i = 0; i < 30; i++){
        if(num == vetor[i]){
            cont = cont + 1;
            printf("indice: %d\n", i);
        }
    }

    printf("Foi achado um total de {%d} chaves\n", cont);




    return 0;
}