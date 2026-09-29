#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida. 
*/

int main(){

    float velocidade, multa = 5, velocidade_max = 80;

    printf("Informe a velocidade do carro:\n");
    scanf("%f", &velocidade);

    if(velocidade > velocidade_max){
        printf("Foi aplicado uma multa no valor de %.2f\n", (velocidade - velocidade_max) * multa);
    }
    else{
        printf("Não foi aplicado nenhuma multa\n");
    }

    return 0;
}