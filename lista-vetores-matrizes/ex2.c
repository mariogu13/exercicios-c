/*Leia 5 números inteiros em um vetor, calcule a soma e a média deles e imprima os resultados.*/

#include <stdio.h>
#define TAMANHO 5

int main() {
    int vetor[TAMANHO], i, soma=0;
    float media;
    
    for(i=0; i<TAMANHO; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = (float)soma / TAMANHO;
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}