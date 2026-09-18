#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia as duas notas de um aluno em uma materia em uma matéria e mostre na tela sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5  
*/

int main(){
    float nota1, nota2;

    printf("Calculo de Media\n");

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("\nNota 2: ");
    scanf("%f", &nota2);

    printf("A média entre %.1f e %.1f é igual a %.1f\n", nota1, nota2, (nota1 + nota2) / 2);
    return 0;
}