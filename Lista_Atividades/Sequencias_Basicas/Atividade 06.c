#include <stdio.h>
#include <stdlib.h>

/*
Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte.
Ex:  
Digite um número: 3.5 
O dobro de 3.5 é 7.0 
A terça parte de 3.5 é 1.16666 
*/
int main(){
    float num;
    printf("Digite um número: \n");
    scanf("%f", &num);

    printf("\nO dobro de %.1f é %.1f\n", num, num * 2);
    printf("A terça parte de %.1f é %.2f\n", num, num / 3);




    return 0;
}