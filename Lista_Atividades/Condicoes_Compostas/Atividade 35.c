#include <stdio.h>
#include <stdlib.h>

/*
Um programa de vida saudável quer dar pontos atividades físicas que podem 
ser trocados por dinheiro. O sistema funciona assim: 
 
   - Cada hora de atividade física no mês vale pontos 
      - até 10h de atividade no mês: ganha 2 pontos por hora 
      - de 10h até 20h de atividade no mês: ganha 5 pontos por hora 
      - acima de 20h de atividade no mês: ganha 10 pontos por hora 
   - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)   
 
Faça um programa que leia quantas horas de atividade uma pessoa teve por mês, 
calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar.
*/

int main(){

    float atividade_fisica = 0, money = 0, pontos = 0;

    
    printf("Quantas horas de atividade foram feitas no mes?\n");
    scanf("%f", &atividade_fisica);

    if(atividade_fisica <= 10){
        pontos = 2 * atividade_fisica;
    }
    else if(atividade_fisica > 10 && atividade_fisica <= 20){
        pontos = 5 * atividade_fisica;
    }
    else{
        pontos = 10 * atividade_fisica;
    }

    money = 0.05 * pontos;

    printf("Voce obteve %d pontos\n", pontos);
    printf("O seu faturamento foi de: R$ %.2f nesse mes", money);




    return 0;
}