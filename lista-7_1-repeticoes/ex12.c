/*12 - Escrever um algoritmo que receba vários números inteiros
e imprima a quantidade de números primos dentre os números que
foram digitados. O algoritmo acaba quando se digita um número menor ou igual a 0.*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, primo, i, qtdPrimos = 0;
    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        if(num > 1){
            primo = 1;
            for(i = 2; i <= sqrt(num); i++){
                if(num % i == 0){
                    primo = 0;
                    break;
                }
            }
            if(primo)
                qtdPrimos++;
        }
    } while(num > 0);
    
    printf("Quantidade de primos: %d\n", qtdPrimos);
    return 0;
}