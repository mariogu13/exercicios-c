/*Leia uma matriz 3x2 (3 linhas e 2 colunas) do usuário.
Calcule e imprima a matriz transposta, que será 2x3 (colunas viram linhas).
Ou seja: o elemento que está em [i][j] na matriz original deve estar em [j][i] na transposta.*/

#include <stdio.h>
#define LINHAS 3
#define COLUNAS 2

int main() {
    int matriz[LINHAS][COLUNAS], i, j;
    
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("Digite um número inteiro: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz Original\n");
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("%-3d", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz Transposta\n");
    for(i = 0; i < COLUNAS; i++){
        for(j = 0; j < LINHAS; j++){
            printf("%-3d", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}