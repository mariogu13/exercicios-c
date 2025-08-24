/*7. Construa um algoritmo que leia um vetor N[20].
A seguir, encontre o menor elemento do vetor N e a sua 
posição dentro do vetor, mostrando: “O menor elemento de N é”, 
M, “e sua posição dentro do vetor é:”,P.*/

#include <stdio.h>
#include <math.h>
#define TAMANHO 20

int main(){
    float N[TAMANHO], M = INFINITY;
    int i, P;
    
    for(i = 0; i < TAMANHO; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%f", &N[i]);
        
        if(N[i]<M){
            M = N[i];
            P = i;
        }
        
    }
    printf("O menor elemento de N é %.2f e sua posição dentro do vetor é %d\n", M, P);
    
    return 0;
}