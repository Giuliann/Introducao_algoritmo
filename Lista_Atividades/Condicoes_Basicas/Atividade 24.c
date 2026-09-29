#include <stdio.h>
#include <stdlib.h>

/*
[DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. 
Analise seus comprimentos e diga se é possível formar um triângulo com essas 
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento 
de cada lado deve ser menor que a soma dos outros dois. 
*/

int main(){

    float a, b, c;

    printf("Informe o valor do segmento A:\n");
    scanf("%f", &a);

    printf("Informe o valor do segmento B:\n");
    scanf("%f", &b);

    printf("Informe o valor o segmento C:\n");
    scanf("%f", &c);

    if(a < (b + c)){
        if(b < (a + c)){
            if(c < (a + b)){
                printf("É um triangulo\n");
            }
        }
    }
    else{
        printf("Não é um triangulo\n");
    }

    
    
    return 0;
}