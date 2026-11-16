#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
[DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura) 
*/

int main(){

    srand(time(NULL));

    int jogador, sorteio = rand() % 3;

    printf("Escolha:\n");
    printf("(0) Pedra\n");
    printf("(1) Papel\n");
    printf("(2) Tesoura\n");
    scanf("%d", &jogador);

    if(jogador == sorteio){
        if(jogador == 0 && sorteio == 0){
            printf("Empate Jogador jogou Pedra e CPU jogou Pedra\n");
        }
        else if(jogador == 1 && sorteio == 1){
            printf("Empate Jogador jogou Papel e CPU jogou Papel\n");
        }
        else{
            printf("Empate Jogador Jogou Tesoura e CPU jogou Tesoura\n");
        }
    }else{
        // Vitorias
        if(jogador == 0 && sorteio == 1){
            printf("Jogador Perdeu\n");
            printf("Jogador jogou Pedra e CPU jogou Papel\n");
        }
        else if(jogador == 1 && sorteio == 2){
            printf("Jogador Perdeu\n");
            printf("Jogador jogou Papel e CPU jogou Tesoura\n");
        }
        else if(jogador == 2 && sorteio == 0){
            printf("Jogador Perdeu\n");
            printf("Jogador jogou Tesoura e CPU jogou Pedra\n");
        }
        // Derrotas 
        else if(jogador == 0 && sorteio == 2){
            printf("Jogador Ganhou\n");
            printf("Jogador jogou Pedra e CPU jogou Tesoura\n");
        }
        else if(jogador == 1 && sorteio == 0){
            printf("Jogador Ganhou\n");
            printf("Jogador jogou Papel e CPU jogou Pedra\n");
        }
        else if(jogador == 2 && sorteio == 1){
            printf("Jogador Ganhou\n");
            printf("Jogador jogou Tesoura e CPU jogou Papel\n");
        }
    }

    printf("Fim do jogo\n");

    return 0;
}