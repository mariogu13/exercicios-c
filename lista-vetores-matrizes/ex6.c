/*Crie uma matriz 5x5.
Preencha ela para que seja uma matriz identidade, ou seja:
- 1 em todas as posições da diagonal principal (onde linha == coluna)
- 0 em todas as outras posições.
Imprima a matriz formatada.*/

#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS], i, j;
    
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            if(j == i)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
    
    for(i = 0; i < LINHAS; i++){
        for(j = 0; j < COLUNAS; j++){
            printf("%-3d", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}