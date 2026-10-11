#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e 
guarde esses dados em três vetores. No final, mostre uma listagem contendo 
apenas os dados das funcionárias mulheres que ganham mais de R$5 mil.
*/

struct dados{
    char nome[30];
    char sexo;
    float salario;
};

int main(){

    struct dados funcionario[5];
    int i;

    printf("Digite as informacoes dos funcionarios\n");

    for(i = 0; i < 5; i++){
        printf("Digite o Nome do funcionario[%d]: \n", i + 1);
        scanf("%s", funcionario[i].nome);
        getchar();

        printf("Informe o Sexo do funcionario sendo: [M] masculino e [F] feminino: \n");
        scanf("%c", &funcionario[i].sexo);
        getchar();

        printf("Informe o Salario do funcionario: \n");
        scanf("%f", &funcionario[i].salario);
        getchar();
    }

    for(i = 0; i < 5; i++){
        if(funcionario[i].sexo == 'F' || funcionario[i].sexo == 'f'){
            if(funcionario[i].salario > 5000){
                printf("Nome: %s | Sexo: %c, | Salario: %.2f\n", funcionario[i].nome, funcionario[i].sexo, funcionario[i].salario);
            }
        }
    }




    return 0;
}