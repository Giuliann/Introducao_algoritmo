#include <stdlib.h>
#include <stdio.h>

/*
Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo: 
 
 9   8   7   6   5   4   3   2   1   0 
[0] [1] [2] [3] [4] [5] [6] [7] [8] [9] 
*/

int main(){

    int vetor[10], i;

    for(i = 0; i < 10; i++){
        
        vetor[i] = 9 - i;
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", vetor[i]);
    }



    return 0;
}