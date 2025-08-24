/*14. Construa um algoritmo que leia um conjunto não determinado de pares de valores M e N
(parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre: Obs. utilize modularização.
- a sequência do menor até o maior, inclusive;
- a soma dos inteiros consecutivos do menor até o maior, inclusive.*/

#include <stdio.h>

void calcular(int m, int n){
    int menor = m < n ? m : n;
    int maior = m > n ? m : n;
    int i, soma = 0;
    
    for(i=menor; i<=maior; i++){
        printf("%d ", i);
        soma += i;
    }
    printf("\nSoma: %d\n", soma);
}

int main() {
    int m, n;
    while(1){
        printf("Digite valor de m: ");
        scanf("%d", &m);
        printf("Digite valor de n: ");
        scanf("%d", &n);
        
        if(m < 1 || n < 1)
            break;
        
        calcular(m, n);
    }

    return 0;
}
