/*Preencher e imprimir vetor
Crie um programa que leia 10 números inteiros do usuário, 
armazene em um vetor e depois imprima os números na ordem inversa.
*/

#include <stdio.h>

int main() {
    int vetor[10], i;
    
    for(i=0; i<10; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }
    for(i=9; i>=0; i--){
        printf("%d ", vetor[i]);
    }

    return 0;
}