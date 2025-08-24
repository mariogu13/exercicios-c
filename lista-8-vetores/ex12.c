/*12. Construa um algoritmo que leia um vetor D[60]. 
A seguir, troque o 1º elemento com o 31º , o 2º com o 32º , etc. 
Mostre no final o vetor modificado.*/

#include <stdio.h>
#define TAMANHO 60

int main() {
    int i;
    float D[TAMANHO], temp;
    
    for(i = 0; i < TAMANHO; i++){
        printf("Digite o elemento de índice %d: ", i);
        scanf("%f", &D[i]);
    }
    for(i = 0; i < TAMANHO/2; i++){
        temp = D[i];
        D[i] = D[i+TAMANHO/2];
        D[i+TAMANHO/2] = temp;
    }
    
    printf("\nVetor Modificado\n");
    for(i = 0; i < TAMANHO; i++){
        printf("%.2f\n", D[i]);
    }

    return 0;
}