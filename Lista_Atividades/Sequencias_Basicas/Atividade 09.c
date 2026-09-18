#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia a largura e altura de uma parede, calcule e 
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço, 
sabendo que cada litro de tinta pinta uma área de 2metros quadrados.
*/

int main(){

    float largura, altura, litro = 2;

    printf("Digite a largura da parede:\n");
    scanf("%f", &largura);

    printf("Digite a altura da parede:\n");
    scanf("%f", &altura);

    printf("\nA area da parede é de %.2fm²\n", largura * altura);
    printf("Serao necessarios %.2f baldes de tinta para o serviço.\n", (largura * altura) / litro );

    return 0;
}