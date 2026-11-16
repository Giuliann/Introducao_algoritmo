#include <stdio.h>
#include <stdlib.h>

/*
[DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo 
de triângulo será formado:  
   - EQUILÁTERO: todos os lados iguais 
   - ISÓSCELES: dois lados iguais 
   - ESCALENO: todos os lados diferentes
*/

int main(){

    float a, b, c;

    printf("Informe o valor do segmento A:\n");
    scanf("%f", &a);

    printf("Informe o valor do segmento B:\n");
    scanf("%f", &b);

    printf("Informe o valor o segmento C:\n");
    scanf("%f", &c);

    if(a < (b + c)){
        if(b < (a + c)){
            if(c < (a + b)){
                printf("É um triangulo\n");

                if(a == b && b == c){
                    printf("É um triangulo Equilatero\n");
                }
                else if(a == b || b == c || c == a){
                    printf("É um triangulo Isosceles\n");
                }
                else{
                    printf("É um triangulo Escaleno\n");
                }       
            }
            else{
                printf("Não é um triangulo\n");
            }
        }
        else{
            printf("Não é um triangulo\n");
        }
    }
    else{
        printf("Não é um triangulo\n");
    }



    return 0;
}