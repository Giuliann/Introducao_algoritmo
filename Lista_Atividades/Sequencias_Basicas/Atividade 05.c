#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro e mostre o seu antecessor e seu sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10
*/
int main(){

    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);

    printf("O antecessor de %d é %d\n", num, num - 1);
    printf("O sucessor de %d é %d\n", num, num + 1);

    return 0;
}