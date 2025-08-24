/*5. Faça um algoritmo que leia 10 números inteiros imprima a
soma dos números positivos e a soma dos números negativos.*/

#include <stdio.h>

int main() {
    int i, n, pos=0, neg=0;
    
    for(i=1; i<=10; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &n);
        if(n>0){
            pos += n;
        }
        if(n<0){
            neg += n;
        }
    }
    
    printf("Soma dos positivos: %d\n", pos);
    printf("Soma dos negativos: %d\n", neg);

    return 0;
}