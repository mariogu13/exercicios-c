/*1 - Faça um programa que leia número reais maiores que zero.
Quando for entrado o número zero, o programa deverá apresentar
quantos números foram entrados e a média destes. */

#include <stdio.h>

int main() {
    float n=1, media, soma=0;
    int qtd=-1;
    
    while(n!=0){
        printf("Digite um número real: ");
        scanf("%f", &n);
        qtd++;
        soma += n;
    }
    media = soma/qtd;
    printf("Quantidade de números: %d\n", qtd);
    printf("Média dos valores: %.2f", media);

    return 0;
}