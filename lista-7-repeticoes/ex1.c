/*1. Faça um algoritmo que leia 10 números inteiros imprima a quantidade de números positivos.*/

#include <stdio.h>

int main() {
    int i, n, pos=0;
    
    for(i=1; i<=10; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &n);
        if(n>0)
            pos++;
    }
    
    printf("Positivos: %d", pos);

    return 0;
}