#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) 
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45
*/

int main(){
    
    float dinheiro, dolar = 3.45;
    printf("Informe quanto dinheiro você tem em R$: ");
    scanf("%f", &dinheiro);

    printf("Você pode comprar %.2f dólares", dinheiro / dolar);




    return 0;
}