/*Crie um programa que leia 8 números inteiros e os armazene em um vetor.
Depois, o programa deve identificar e imprimir qual é o maior e qual é o menor valor do vetor.
*/

#include <stdio.h>
#define TAMANHO 8

int main() {
    int vetor[TAMANHO], i, maior, menor;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &vetor[0]);
    maior = vetor[0];
    menor = vetor[0];
        
    for(i=1; i<TAMANHO; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] > maior)
            maior = vetor[i];
        if(vetor[i] < menor)
            menor = vetor[i];
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}