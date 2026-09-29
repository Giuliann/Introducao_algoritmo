#include <stdio.h>
#include <stdlib.h>

/*
Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua 
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou 
não um bom aproveitamento (se ficou acima da média 7.0). 
*/

int main(){

    char nome[30];
    float nota1, nota2;

    printf("Digite o nome do aluno:\n");
    scanf("%s", nome);

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);;

    float media = (nota1 + nota2) / 2;

    printf("A media do %s foi de %.2f\n", nome, media);

    if(media >= 7){
        printf("Parabes voce teve um bom aproveitamento e ficou acima da media\n");
    }else{
        printf("Infelizmente voce nao teve um bom rendimento e ficou abaixo da media\n");
    }


    return 0;
}