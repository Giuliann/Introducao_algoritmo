#include <stdio.h>
#include <stdlib.h>

/*
 Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em 
um vetor. No final, mostre:  
 a) Qual é a média da turma 
 b) Quantos alunos estão acima da média da turma 
 c) Qual foi a maior nota digitada 
 d) Em que posições a maior nota aparece 
*/

int main(){

    float notas[10], media = 0, maior;
    int i, cont = 0, indice = 0;

    printf("Informe 10 notas: \n");

    for(i = 0; i < 10; i++){
        printf("Informe o valor do aluno[%d]\n", i + 1);
        scanf("%f", &notas[i]);

        media = media + notas[i];
    }

    media = media / 10;

    printf("A media da turma foi %.2f\n\n", media);

    for(i = 0; i < 10; i++){
        if(notas[i] > media){
            cont = cont + 1;
        }
    }
    printf("O total de alunos acima da media é {%d}\n", cont);

    maior = notas[0];

    for(i = 0; i < 10; i++){
        if(notas[i] > maior){
            maior = notas[i];
            indice = i;
        }
    }

    for(i = 0; i < 10; i++){
        if(notas[i] == maior){
            printf("Notas: %.2f | Indices das notas [%d]\n", maior, i);
        }
    }


    return 0;
}