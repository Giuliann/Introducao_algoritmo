#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa para calcular a redução do tempo de vida de um 
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele 
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule 
quantos dias de vida um fumante perderá e exiba o total em dias. 
*/

int main(){

    float cigarros, anos_fumados;

    printf("Por quantos anos você ja fumou?\n");
    scanf("%f", &anos_fumados);

    printf("Quantos cigarros você fuma por dia?\n");
    scanf("%f", &cigarros);
    
    float total_dias_fumando = anos_fumados * 365;
    float minutos_perdidos = total_dias_fumando * cigarros * 10;

    printf("O tempo de vida perdido foi de %.2f min\n", minutos_perdidos);
    printf("O tempo total em horas foi de %.2f horas\n", minutos_perdidos / 60.0);
    printf("O tempo total em dias foi de %.2f dias\n", minutos_perdidos / (60.0 * 24.0));   

    return 0;
}