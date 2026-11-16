#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa para aprovar ou não o empréstimo bancário para a compra 
de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e 
em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que 
ela não pode exceder 30% do salário ou então o empréstimo será negado. 
*/

int main(){

    float val_casa, salario;
    int anos;

    printf("Informe o valor da casa:\n");
    scanf("%f", &val_casa);

    printf("Informe seu salario:\n");
    scanf("%f", &salario);

    printf("Informe em quantos anos você ira pagar:\n");
    scanf("%d", &anos);

    float prestacao = val_casa / (anos * 12), trinta_ = (0.30 * salario);

    if(prestacao > trinta_){
        printf("Emprestimo Negado\n");
    }
    else{
        printf("Emprestimo Aprovado\n");
        printf("O Emprestimo no valor de R$%.2f com prestacao no valor de %dx de R$%.2f\n", val_casa, (anos * 12), prestacao);
    }




    return 0;
}