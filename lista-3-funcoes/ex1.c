/*1. Faça uma função identificada por triângulo que receba um caractere como argumento
e imprima uma pirâmide (com 4 níveis) com o caractere passado. Exemplo: ‘@’  */

#include <stdio.h>

void triangulo(char x)
{
    printf("   %c\n", x);
    printf("  %c%c\n", x, x);
    printf(" %c%c%c%c\n", x, x, x, x);
    printf("%c%c%c%c%c%c", x, x, x, x, x, x);
}

int main()
{
    triangulo('@');

    return 0;
}