/*6. Construa um algoritmo que leia um vetor C[50].
Encontre a seguir o maior elemento de C e mostre-o.*/

#include <stdio.h>
#include <math.h>
#define TAMANHO 50

int main(){
    float C[TAMANHO], maior = -INFINITY;
    int i;
    
    for(i = 0; i < TAMANHO; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%f", &C[i]);
        
        if(C[i]>maior)
            maior = C[i];
    }
    printf("O maior valor é %.2f\n", maior);
    
    return 0;
}