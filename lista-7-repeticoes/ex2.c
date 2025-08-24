/*2. Faça um algoritmo que leia 15 números inteiros imprima a quantidade de números pares.*/

#include <stdio.h>

int main() {
    int i, n, pares=0;
    
    for(i=1; i<=15; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &n);
        if(n%2==0)
            pares++;
    }
    
    printf("Pares: %d", pares);

    return 0;
}