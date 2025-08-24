/*5. Construa um algoritmo que leia um vetor X[10].
Substitua, a seguir, todos os valores nulos do vetor X por 1 e escreva novamente o vetor X.*/

#include <stdio.h>
#define TAMANHO 10

int main(){
    float X[TAMANHO];
    int i;
    
    for(i = 0; i < TAMANHO; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%f", &X[i]);
        if(X[i]==0)
            X[i] = 1;
    }
    printf("\nVetor Modificado\n");
    for(i = 0; i < TAMANHO; i++)
        printf("%.2f\n", X[i]);
    
    return 0;
}