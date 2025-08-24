/*Leia duas matrizes:
- A de tamanho 2x3
- B de tamanho 3x2
Calcule o produto AB (uma matriz 2x2)
Imprima o resultado formatado.*/

#include <stdio.h>
#define LINHAS_A 2
#define COLUNAS_A 3
#define LINHAS_B 3
#define COLUNAS_B 2

int main() {
    int A[LINHAS_A][COLUNAS_A], B[LINHAS_B][COLUNAS_B], C[LINHAS_A][COLUNAS_B] = {0}, i, j, k;
    
    printf("Matriz A\n");
    for(i = 0; i < LINHAS_A; i++){
        for(j = 0; j < COLUNAS_A; j++){
            printf("Digite um número inteiro: ");
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nMatriz B\n");
    for(i = 0; i < LINHAS_B; i++){
        for(j = 0; j < COLUNAS_B; j++){
            printf("Digite um número inteiro: ");
            scanf("%d", &B[i][j]);
        }
    }
    
    for(i = 0; i < LINHAS_A; i++){
        for(j = 0; j < COLUNAS_B; j++){
            for(k = 0; k < COLUNAS_A; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("\nMatriz C (A * B)\n");
    for(i = 0; i < LINHAS_A; i++){
        for(j = 0; j < COLUNAS_B; j++){
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}