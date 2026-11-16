#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que leia duas notas de um aluno e calcule a sua média, 
mostrando uma mensagem no final, de acordo com a média atingida: 
   - Média até 4.9: REPROVADO 
   - Média entre 5.0 e 6.9: RECUPERAÇÃO 
   - Média 7.0 ou superior: APROVADO 
*/

int main(){

    float nota1, nota2, media;

    printf("Informe a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Informe o segundo valor:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media <= 4.9){
        printf("Sua media foi %.2f situacao: REPROVADO\n", media);
    }
    else if(media >= 5.0 && media <= 6.9){
        printf("Sua media foi %.2f situacao: RECUPERACAO\n", media);
    }
    else if(media >= 7.0){
        printf("Sua media foi %.2f situacao: APROVADO\n", media);
    }
    


    return 0;
}