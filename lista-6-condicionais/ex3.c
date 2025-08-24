/*4. Faça um algoritmo que receba quatro valores, I, A,B e C, 
I é um valor inteiro e positivo e A, B e C são valores reais.
Escreva os números A, B e C obedecendo à tabela a seguir.

VALOR DE I  | FORMA A ESCREVER
1           | A. B e C em ordem crescente.
2           | A, B e C em ordem decrescente.
3           | O maior fica entre os outros dois números.*/

#include <stdio.h>

void crescente(float x, float y, float z){
    if(x < y && y < z){
        printf("%.2f, %.2f, %.2f", x, y, z);
    } else if(x < z && z < y){
        printf("%.2f, %.2f, %.2f", x, z, y);
    } else if(y < x && x < z){
        printf("%.2f, %.2f, %.2f", y, x, z);
    } else if(y < z && z < x){
        printf("%.2f, %.2f, %.2f", y, z, x);
    } else if(z < x && x < y){
        printf("%.2f, %.2f, %.2f", z, x, y);
    } else if(z < y && y < x){
        printf("%.2f, %.2f, %.2f", z, y, x);
    }
}

void decrescente(float x, float y, float z){
    if(x < y && y < z){
        printf("%.2f, %.2f, %.2f", z, y, x);
    } else if(x < z && z < y){
        printf("%.2f, %.2f, %.2f", y, z, x);
    } else if(y < x && x < z){
        printf("%.2f, %.2f, %.2f", z, x, y);
    } else if(y < z && z < x){
        printf("%.2f, %.2f, %.2f", x, z, y);
    } else if(z < x && x < y){
        printf("%.2f, %.2f, %.2f", y, x, z);
    } else if(z < y && y < x){
        printf("%.2f, %.2f, %.2f", x, y, z);
    }
}

void maiorEntre(float x, float y, float z){
    if(x < y && y < z){
        printf("%.2f, %.2f, %.2f", y, z, x);
    } else if(x < z && z < y){
        printf("%.2f, %.2f, %.2f", z, y, x);
    } else if(y < x && x < z){
        printf("%.2f, %.2f, %.2f", x, z, y);
    } else if(y < z && z < x){
        printf("%.2f, %.2f, %.2f", z, x, y);
    } else if(z < x && x < y){
        printf("%.2f, %.2f, %.2f", x, y, z);
    } else if(z < y && y < x){
        printf("%.2f, %.2f, %.2f", y, x, z);
    }
}

int main() {
    float a,b,c;
    int i;
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    printf("Digite o valor de I: ");
    scanf("%d", &i);
    
    switch(i){
        case 1:
            crescente(a,b,c);
            break;
        case 2:
            decrescente(a,b,c);
            break;
        case 3:
            maiorEntre(a,b,c);
            break;
        default:
            printf("Opção Inválida!");
    }
    
    return 0;
}