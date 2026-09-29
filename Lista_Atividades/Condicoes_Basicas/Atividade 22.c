#include <stdio.h>
#include <stdlib.h>

/*
Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos 
para todos, mas especialmente para mulheres. Faça um programa que leia nome, 
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo 
que: 
   - Homens ganham 5% de desconto 
   - Mulheres ganham 13% de desconto
*/

int main(){

    char nome[20], sexo;
    float valor;

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Informe seu sexo: \n");
    printf("(M) ou (m) para masculino\n");
    printf("(F) ou (f) para feminino\n");
    scanf("%s", &sexo);

    printf("Digite o valor das compras:\n");
    scanf("%f", &valor);


    if(sexo == 'M' || sexo == 'm'){
        printf("Parabéns %s você teve um desconto no valor das suas compras ficou: R$%.2f \n", nome, valor - (0.05 * valor));
    }
    else if(sexo == 'F' || sexo == 'f'){
        printf("Parabéns %s, Feliz dia da Mulher, você teve um desconto no valor das suas compras ficou: R$%.2f \n", nome, valor - (0.13 * valor));
    }

    return 0;
}