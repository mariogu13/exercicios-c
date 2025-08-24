/*1. Construa um algoritmo que leia dois números reais e a operação aritmética desejada
(use um char para armazenar a operação). Calcule então a resposta adequada.
Sendo a operação ‘+’ uma soma, ‘*’ multiplicar os dois números, ‘/’ dividir o primeiro pelo segundo,
‘-‘ subtração do primeiro pelo segundo (utilize o comando switch).*/

#include <stdio.h>

int main() {
    float num1, num2;
    char op;
    
    printf("Digite um número real: "); 
    scanf("%f", &num1);
    printf("Digite um número real: ");
    scanf("%f", &num2);
    printf("Digite a operação desejada: ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            printf("%.2f %c %.2f = %.2f\n", num1, op, num2, num1 + num2);
            break;
        case '*':
            printf("%.2f %c %.2f = %.2f\n", num1, op, num2, num1 * num2);
            break;
        case '/':
            printf("%.2f %c %.2f = %.2f\n", num1, op, num2, num1 / num2);
            break;
        case '-':
            printf("%.2f %c %.2f = %.2f\n", num1, op, num2, num1 -+ num2);
            break;
        default:
            printf("Operação Inválida!\n");
    }
    
    return 0;
}