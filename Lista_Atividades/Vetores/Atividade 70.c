#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que preencha automaticamente um vetor numérico com 8 
posições, conforme abaixo:

999  999  999  999  999  999  999  999 
[0]  [1]  [2]  [3]  [4]  [5]  [6]  [7]
*/

int main(){

    int vetor[7], i;

    for(i = 0; i < 7; i++){
        vetor[i] = i;
    }

    for(i = 0; i < 7; i++){
        printf("%d\n", vetor[i]);
    }
    


    return 0;
}