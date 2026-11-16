#include <stdlib.h>
#include <stdio.h>

/*
Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O 
aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para 
carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa 
que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e 
quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a 
tabela a seguir: 
 
   - Carros populares (aluguel de R$90 por dia) 
      - Até 100Km percorridos: R$0,20 por Km 
      - Acima de 100Km percorridos: R$0,10 por Km 
   - Carros de luxo (aluguel de R$150 por dia) 
      - Até 200Km percorridos: R$0,30 por Km 
      - Acima de 200Km percorridos: R$0,25 por Km 
*/

int main(){

    float km = 0, dias = 0, valor = 0;
    int select = 0;

    printf("Por quantos dias foram alugados?\n");
    scanf("%f", &dias);

    printf("Quantos Km foram pecorridos?\n");
    scanf("%f", &km);

    printf("Escolha o tipo de carro:\n");
    printf("[1] Popular\n");
    printf("[2] Luxo\n");
    scanf("%d", &select);

    switch(select){
        case 1:
            if(km <= 100){
                valor = (90 * dias) + (0.20 * km);
            }
            else{
                valor = (90 * dias) + (0.10 * km);
            }
            printf("Valor total do Aluguel ficou: R$ %.2f", valor);
            break;
        case 2:
            if(km <= 200){
                valor = (150 * dias) + (0.30 * km);
            }
            else{
                valor = (150 * dias) + (0.25 * km);
            }
            printf("Valor total do Aluguel ficou: R$ %.2f", valor);
            break;
        default:
        printf("Nao existe essa opcao, reinicie o programa.\n");
        break;
    }




    return 0;
}