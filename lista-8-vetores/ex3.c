/*3. Elabore um algoritmo que leia um vetor X com 35 elementos reais
e calcule a diferença entre o maior e o menor elemento existente, 
bem como as posições que os mesmos ocupam no vetor.*/

#include <stdio.h>
#include <math.h>
#define TAMANHO 35

int main(){
    float vetor[TAMANHO], maior = -INFINITY, menor = INFINITY;
    int i, posMaior, posMenor;
    
    for(i=0; i<TAMANHO; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%f", &vetor[i]);
        if(vetor[i]>maior){
            maior = vetor[i];
            posMaior = i;
        }
        if(vetor[i]<menor){
            menor = vetor[i];
            posMenor = i;
        }
    }
    printf("O maior valor é %.2f e está na posição %d\n", maior, posMaior);
    printf("O menor valor é %.2f e está na posição %d\n", menor, posMenor);
    float diferenca = maior - menor;
    printf("Diferença entre maior e menor: %.2f\n", diferenca);
    return 0;
}