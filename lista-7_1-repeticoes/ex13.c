/*13 - Construa um algoritmo que dado um número,
por exemplo 15, divida este número por 2 até que o resultado da
divisão inteira seja menor que 2. Informe o número de divisões.
Exemplo:

15/2 = 7, sete é maior que 2 então divida
7/2 = 3, ainda é maior que 2 então
3/2 = 1, fim.*/

#include <stdio.h>

int main() {
    int num, resultado, numDivisoes = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    do{
        resultado = num / 2;
        printf("%d / 2 = %d\n", num, resultado);
        num = resultado;
        numDivisoes++;
    } while(resultado >= 2);
    printf("\nNúmero de divisões: %d\n", numDivisoes);
    return 0;
}