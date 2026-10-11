#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No 
final, mostre: 
 a) Qual é a média de idade das pessoas cadastradas 
 b) Em quais posições temos pessoas com mais de 25 anos 
 c) Qual foi a maior idade digitada (podem haver repetições) 
 d) Em que posições digitamos a maior idade
*/

int main(){

    int idade[8], i, media = 0, maior, indice;

    printf("Informe a idade de 8 pessoas:\n");

    for(i = 0; i < 8; i++){
        printf("Informe a idade da pessoa[%d]\n", i + 1);
        scanf("%d", &idade[i]);

        media = media + idade[i];
    }

    media = media / 8;
    maior = idade[0];

    for(i = 0; i < 8; i++){
        if(idade[i] > maior){
            maior = idade[i];
            indice = i;
        }
    }

    for(i = 0; i < 8; i++){
        if(idade[i] > 25){
            printf("{%d} indice [%d]\n", idade[i], i);
        }
    }

    printf("A media é %d\n", media);
    printf("A maior idade é %d no indice: [%d]\n", maior, indice);

    printf("A maior idade foi encontrada nos indices:\n");

    for(i = 0; i < 8; i++){
        if(idade[i] == maior){
            printf("posicao: [%d]\n", i);
        }
    }




    

    



    return 0;
}