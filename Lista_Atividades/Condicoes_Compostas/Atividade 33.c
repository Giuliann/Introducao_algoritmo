#include <stdio.h>
#include <stdlib.h>

/*
O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no 
peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o 
indivíduo dentro de certas faixas. 
 
   - abaixo de 18.5: Abaixo do peso 
   - entre 18.5 e 25: Peso ideal 
   - entre 25 e 30: Sobrepeso 
   - entre 30 e 40: Obesidade 
   - acima de 40: Obseidade mórbida
*/

int main(){

    float altura, peso;

    printf("Informe o seu peso:\n");
    scanf("%f", &peso);

    printf("Informe a sua altura:\n");
    scanf("%f", &altura);
    
    float imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("Seu IMC deu %.2f\n", imc);
        printf("Você esta abaixo do peso\n");
    }
    else if(imc >= 18.5 && imc < 25){
        printf("Seu IMC deu %.2f\n", imc);
        printf("Você esta no peso ideal\n");
    }
    else if(imc >= 25 && imc < 30){
        printf("Seu IMC deu %.2f\n", imc);
        printf("Você esta sobrepeso\n");
    }
    else if(imc >= 30 && imc < 40){
        printf("Seu IMC deu %.2f\n", imc);
        printf("Você esta obeso\n");
    }
    else if(imc >= 40){
        printf("Seu IMC deu %.2f\n", imc);
        printf("Você esta com Obesidade morbida\n");
    }
    
    



    return 0;
}