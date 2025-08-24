/*1 - Dado um inteiro positivo N, faça um algoritmo que imprima
todos os valores menores que N da seguinte sequência:
8, 10, 16, 18, 32, 34,...*/

#include <stdio.h>

int main() {
    int N, k, num=8;
    
    printf("Digite o valor de N (Inteiro e Positivo): ");
    scanf("%d", &N);
    for(k = 3; ; k++){
        if(num >= N) break;
        printf("%d ", num);
        if(num + 2 >= N) break;
        printf("%d ", num + 2);
        num *= 2;
    }
    return 0;
}

