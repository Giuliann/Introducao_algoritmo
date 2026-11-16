#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia a largura e o comprimento de um terreno 
retangular, calculando e mostrando a sua área em m². O programa também 
devemostrar a classificação desse terreno, de acordo com a lista abaixo: 
   - Abaixo de 100m² = TERRENO POPULAR 
   - Entre 100m² e 500m² = TERRENO MASTER 
   - Acima de 500m² = TERRENO VIP 
*/

int main(){

    float largura, comprimento, area;

    printf("Informe o comprimento do terreno:\n");
    scanf("%f", &comprimento);

    printf("Informe a largura do terreno:\n");
    scanf("%f", &largura);

    area = comprimento * largura;

    if(area < 100){
        printf("Seu terreno tem %.2fm² classificacao: TERRENO POPULAR\n", area);
    }
    else if(area >= 100 && area < 500){
        printf("Seu terreno tem %.2fm² classificacao: TERRENO MASTER\n", area);
    }
    else{
        printf("Seu terreno tem %.2fm² classificacao: TERRENO VIP\n", area);
    }
    


    return 0;
}