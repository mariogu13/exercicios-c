/*4. Construa um algoritmo que leia um vetor A[10]. 
No final, mostre todas as posições do vetor que armazenam 
um valor menor ou igual a 10 e o valor armazenado na posição.*/

#include <stdio.h>
#define TAMANHO 10

int main(){
    float A[TAMANHO];
    int i;
    
    for(i = 0; i < TAMANHO; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%f", &A[i]);
    }
    
    for(i = 0; i < TAMANHO; i++){
        if(A[i]<=10){
            printf("Elemento %d tem o valor %.2f\n", i, A[i]);
        }
    }
    
    return 0;
}