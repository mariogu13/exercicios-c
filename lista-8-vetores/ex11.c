/*11. Construa um algoritmo que leia 2 vetores A[10] e B[10]. 
A seguir, Crie um vetor C que seja a intersecção de A com B e mostre este vetor C. 
Obs.: Intersecção é quando um valor estiver nos dois vetores. 
Considere que não há elementos duplicados em cada um dos vetores.*/

#include <stdio.h>
#define TAMANHO 10

int main() {
    int i, j, k=0, inter;
    float A[TAMANHO], B[TAMANHO], C[TAMANHO];
    
    printf("ELEMENTOS DO VETOR A\n");
    for(i = 0; i < TAMANHO; i++){
        printf("Digite o elemento de índice %d: ", i);
        scanf("%f", &A[i]);
    }
    printf("\nELEMENTOS DO VETOR B\n");
    for(i = 0; i < TAMANHO; i++){
        printf("Digite o elemento de índice %d: ", i);
        scanf("%f", &B[i]);
    }
    for(i = 0; i < TAMANHO; i++){
        inter = 0;
        for(j = 0; j < TAMANHO; j++){
            if(A[i] == B[j]){
                inter = 1;
                break;
            }
        }
        if(inter){
            C[k] = A[i];
            k++;
        }
    }
    
    printf("\nIntersecção dos vetores A e B\n");
    for(i = 0; i < k; i++){
        printf("%.2f\n", C[i]);
    }

    return 0;
}