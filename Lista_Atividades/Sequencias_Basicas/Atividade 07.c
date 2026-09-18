#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um programa que leia uma distância em metros e mostre os valores relativos em outras medidas.
Digite uma distância em metros: 185.72
A distância de 185.72m corresponde a: 
0.18572Km 
1.8572Hm 
18.572Dam 
1857.2dm 
18572.0cm 
185720.0mm 
*/

int main(){
    
    float distancia;
    printf("digite a distancia em metros: \n");
    scanf("%f", &distancia);

    printf("A distancia de %.2f corresponde a: \n", distancia);
    printf("%.5fKm\n", distancia / 1000);
    printf("%.4fHm\n", distancia / 100);
    printf("%.3fDam\n", distancia / 10);
    printf("%f.dm\n", distancia * 10);
    printf("%.1fcm\n", distancia * 100);
    printf("%.1fmm\n", distancia * 1000);

    return 0;
}