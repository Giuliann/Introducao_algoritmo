#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Crie um programa que preencha automaticamente um vetor numérico com 7 
números gerados aleatoriamente pelo computador e depois mostre os valores 
gerados na tela. 
*/

int main(){

    srand(time(NULL));

    int vetor[7], i;

    for(i = 0; i < 7; i++){
        vetor[i] = rand();
    }

    for(i = 0; i < 7; i++){
        printf("%d\n", vetor[i]);
    }


    return 0;
}