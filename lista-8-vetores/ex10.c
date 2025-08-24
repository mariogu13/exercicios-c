/*10. Construa um algoritmo que leia um vetor K[30].
Troque a seguir, todos os elementos de ordem ímpar do vetor 
com os elementos de ordem par imediatamente posteriores. Mostre o vetor modificado.*/

#include <stdio.h>
#define TAMANHO 30

int main() {
    float K[TAMANHO], temp;
    int i;
    
    for(i=0; i<TAMANHO; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%f", &K[i]);
    }
    for(i=0; i<TAMANHO; i+=2){
        temp = K[i];
        K[i] = K[i+1];
        K[i+1] = temp;
    }
    printf("\nVetor Modificado\n");
    for(i=0; i<TAMANHO; i++){
        printf("%.2f\n", K[i]);
    }

    return 0;
}