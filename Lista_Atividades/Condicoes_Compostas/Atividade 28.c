#include <stdlib.h>
#include <stdio.h>

/*
Desenvolva um programa que leia o nome de um funcionário, seu salário, 
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de 
acordo com a tabela a seguir: 
   - Até 3 anos de empresa: aumento de 3% 
   - entre 3 e 10 anos: aumento de 12.5% 
   - 10 anos ou mais: aumento de 20% 
*/

int main(){

    char nome[30];
    float salario;
    int idade_empresa;

    printf("Informe o nome do funcionario:\n");
    scanf("%s", nome);

    printf("Informe o salario atual do funcionario:\n");
    scanf("%f", &salario);

    printf("Informe quantos anos o funcionario trabalhou na empresa:\n");
    scanf("%d", &idade_empresa);

    if(idade_empresa <= 3){
        printf("Parabens %s voce teve um aumento seu salario agora é: R$%.2f\n", nome, salario + (0.03 * salario));
    }
    else if(idade_empresa > 3 && idade_empresa < 10){
        printf("Parabens %s voce teve um aumento seu salario agora é: R$%.2f\n", nome, salario + (0.125 * salario));
    }
    else if(idade_empresa >= 10){
        printf("Parabens %s voce teve um aumento seu salario agora é: R$%.2f\n", nome, salario + (0.20 * salario));
    }


    return 0;
}