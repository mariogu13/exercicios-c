/*2. Faça uma função identificada por quadrado que receba um número inteiro
como argumento e imprima um quadrado (com 4 linhas) com o número passado. Exemplo: 5*/

#include <stdio.h>

void quadrado(char x)
{
    printf(" %c%c%c%c\n", x, x, x, x);
    printf(" %c%c%c%c\n", x, x, x, x);
    printf(" %c%c%c%c\n", x, x, x, x);
    printf(" %c%c%c%c\n", x, x, x, x);
}

int main()
{
    quadrado('5');

    return 0;
}