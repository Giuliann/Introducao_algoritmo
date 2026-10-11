#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No 
final, mostre uma listagem com todos os nomes informados, na ordem inversa 
daquela em que eles foram informados. 
*/

int main(){

    char nome[7][50];
    int i;

    printf("Digite 7 nome:\n");

    for(i = 0; i < 7; i++){
        printf("Nome da pessoa[%d]", i + 1);
        scanf("%s", nome[i]);
    }

    for(i = 7; i > 0; i--){
        printf("%s\n", nome[i]);
    }


    return 0;
}