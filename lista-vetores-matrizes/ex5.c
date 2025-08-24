/*Crie um programa que leia uma matriz 3x3 de inteiros.
Para cada linha, calcule a soma dos elementos.
Imprima a soma de cada linha.*/

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS], i, j, soma[LINHAS] = {0};
    
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("Digite um número inteiro: ");
            scanf("%d", &matriz[i][j]);
            soma[i] += matriz[i][j];
        }
    }
    
    for(i = 0; i < LINHAS; i++){
        printf("Soma da linha %d: %d\n", i, soma[i]);
    }
    
    return 0;
}