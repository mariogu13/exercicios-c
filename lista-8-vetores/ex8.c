/*8. Construa um algoritmo que leia um vetor N[20].
Troque a seguir, o 1º elemento com o último, o 2º elemento 
com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.*/

#include <stdio.h>
#define TAMANHO 20

int main() {
    float N[TAMANHO], temp;
    int i;
    
    for(i=0; i<TAMANHO; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%f", &N[i]);
    }
    for(i=0; i<TAMANHO/2; i++){
        temp = N[i];
        N[i] = N[TAMANHO - 1 - i];
        N[TAMANHO - 1 - i] = temp;
    }
    printf("\nVetor Modificado\n");
    for(i=0; i<TAMANHO; i++){
        printf("%.2f\n", N[i]);
    }

    return 0;
}