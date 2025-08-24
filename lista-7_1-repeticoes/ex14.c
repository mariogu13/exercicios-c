/*14 - Construa um algoritmo que leia um conjunto não determinado de
pares de valores M e N (parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre:
- a sequência do menor até o maior, inclusive;
- a soma dos inteiros consecutivos do menor até o maior, inclusive.*/

#include <stdio.h>

int main() {
    int M, N, i, menor, maior, soma;

    while (1) {
        printf("Digite dois valores M e N: ");
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0) {
            break;
        }

        if (M < N) {
            menor = M;
            maior = N;
        } else {
            menor = N;
            maior = M;
        }

        soma = 0;
        printf("Sequência: ");
        for (i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
        }
        printf("\nSoma = %d\n", soma);
    }

    return 0;
}