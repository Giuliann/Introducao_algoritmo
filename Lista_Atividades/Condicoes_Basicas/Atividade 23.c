#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que pergunte a distância que um passageiro deseja 
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para 
viagens até 200Km e R$0.45 para viagens mais longas. 
*/

int main(){

    int distancia;

    printf("Digite a distancia que deseja percorrer em Km:\n");
    scanf("%d", &distancia);

    if(distancia <= 200){
        printf("O valor da viagem ficou: R$%.2f", 0.50 * distancia);
    }
    else{
        printf("O valor da viagem ficou: R$%.2f", 0.45 * distancia);
    }


    return 0;
}