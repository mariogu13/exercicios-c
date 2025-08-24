/*5. Faça um algoritmo que receba três números(A, B e C) e execute uma das operações listadas
a seguir de acordo com a escolha do usuário. Se for digitada uma opção inválida mostrar
mensagem de erro e terminar a execução do programa. Implemente uma função para cada opção do menu.
As opções são:

1- Média entre três números;
2- Média ponderada entre três valores ( p1=2, p2=4 e p3=6);
3- Diferença do maior pelo menor valor;
4- Cálculo da expressão r = A^2 + B^3 + C^4*/

#include <stdio.h>

void mediaA(float x, float y, float z){
    printf("Média Aritmética: %.2f", (x+y+z)/3);
}

void mediaP(float x, float y, float z){
    printf("Média Ponderada: %.2f", (2*x+4*y+6*z)/3);
}

void diferenca(float x, float y, float z){
    if(x < y && y < z){
        printf("Diferença entre o maior e menor valor: %.2f", z-x);
    } else if(x < z && z < y){
        printf("Diferença entre o maior e menor valor: %.2f", y-x);
    } else if(y < x && x < z){
        printf("Diferença entre o maior e menor valor: %.2f", z-y);
    } else if(y < z && z < x){
        printf("Diferença entre o maior e menor valor: %.2f", x-y);
    } else if(z < x && x < y){
        printf("Diferença entre o maior e menor valor: %.2f", y-z);
    } else if(z < y && y < x){
        printf("Diferença entre o maior e menor valor: %.2f", x-z);
    }
}

void calculo(float x, float y, float z){
    printf("Resultado da expressão: %.2f", x*x + y*y*y + z*z*z*z);
}

int main(){
    float a,b,c;
    int opcao;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    printf("Digite o terceiro número: ");
    scanf("%f", &c);
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            mediaA(a,b,c);
            break;
        case 2:
            mediaP(a,b,c);
            break;
        case 3:
            diferenca(a,b,c);
            break;
        case 4:
            calculo(a,b,c);
            break;
        default:
            printf("Opção Inválida");
    }

    return 0;
}