#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa precisa reajustar o salário dos seus funcionários, dando um 
aumento de acordo com alguns fatores. Faça um programa que leia o salário atual, 
o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa. 
No final, mostre o seu novo salário, baseado na tabela a seguir: 
 
- Mulheres 
  - menos de 15 anos de empresa: +5% 
  - de 15 até 20 anos de empresa: +12% 
  - mais de 20 anos de empresa: +23% 
- Homens 
  - menos de 20 anos de empresa: +3% 
  - de 20 até 30 anos de empresa: +13% 
  - mais de 30 anos de empresa: +25%
*/

int main(){

    float salario_atual = 0, novo_salario = 0;
    char genero;
    int tempo_empresa = 0;

    printf("Informe o salario atual do funcionario(a):\n");
    scanf("%f", &salario_atual);

    printf("Qual o Genero do funcionario(a)?, (H ou h) para homens (M ou m) para mulheres\n");
    scanf("%s", &genero);

    printf("A quantos anos o funcionario(a) esta na empresa?");
    scanf("%d", &tempo_empresa);

    switch(genero){
        case 'M':
        case 'm':
            if(tempo_empresa < 15){
                novo_salario = (salario_atual * 0.05) + salario_atual;
            }
            else if(tempo_empresa >= 15 && tempo_empresa <= 20){
                novo_salario = (salario_atual * 0.12) + salario_atual;
            }
            else{
                novo_salario = (salario_atual * 0.23) + salario_atual;
            }
            printf("\nO novo salario é: R$ %.2f", novo_salario);
            break;
        case 'H':
        case 'h':
            if(tempo_empresa < 20){
                novo_salario = (salario_atual * 0.03) + salario_atual;
            }
            else if(tempo_empresa >= 20 && tempo_empresa <= 30){
                novo_salario = (salario_atual * 0.13) + salario_atual;
            }
            else{
                novo_salario = (salario_atual * 0.25) + salario_atual;
            }
            printf("\nO novo salario é: R$ %.2f", novo_salario);
            break;
        default:
            printf("Nao tem essa opcao, reinicie o programa\n");
    }

    return 0;
}