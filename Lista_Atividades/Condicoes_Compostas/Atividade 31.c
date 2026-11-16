#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
[DESAFIO] Crie um jogo onde o computador vai sortear um número entre 1 e 5 o 
jogador vai tentar descobrir qual foi o valor sorteado.
*/

int main(){

    srand(time(NULL));

    int jogador, num_aleatorio = (rand() % 5) + 1;

    printf("Escolha um número:\n");
    scanf("%d", &jogador);

    printf("Jogador: [%d]\nCPU: [%d]\n", jogador, num_aleatorio);

    if(jogador == num_aleatorio){
        printf("Parabéns você acertou\n\n");
    }
    else{
        printf("Você errou\n\n");
    }

    printf("Fim de Jogo\n");




    return 0;
}