/*Crie uma matriz 4x4 de inteiros.
Leia os números da matriz a partir do usuário.
Imprima a matriz formatada (4 linhas e 4 colunas).*/

#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS], i, j;
    
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("Digite um número inteiro: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMatriz formatada\n");
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}