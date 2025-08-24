/*2. Construa um algoritmo que leia um vetor V[6].
Conte a seguir, quantos valores de V são negativos e mostre essa informação.*/

#include <stdio.h>
#define TAMANHO 6

int main(){
    float v[TAMANHO];
    int i, negativos=0;
    
    for(i=0; i<TAMANHO; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &v[i]);
        if(v[i]<0)
            negativos++;
    }
    printf("Negativos: %d", negativos);
    
    return 0;
}