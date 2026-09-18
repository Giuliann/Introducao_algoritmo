#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva uma lógica que leia os valores de A, B e C de uma equação do segundo grau e mostre o valor de Delta
*/

int main(){
    int a, b, c;
    printf("Digite o valor de A:\n");
    scanf("%d", &a);

    printf("Digite o valor de B:\n");
    scanf("%d", &b);

    printf("Digite o valor de C:\n");
    scanf("%d", &c);

    printf("O valor de Delta é %d\n", (b * b) - (4 * a * c));


    return 0;
}