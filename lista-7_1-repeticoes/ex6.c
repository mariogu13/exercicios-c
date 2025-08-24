/*6 - Ler vários números e informar quantos números entre 100 e 200 foram digitados.
Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução.*/

#include <stdio.h>

int main() {
    float num;
    int cont = 0;
    do{
        printf("Digite um número real: ");
        scanf("%f", &num);
        if(num >= 100 && num <= 200){
            cont++;
        }
    } while(num != 0);
    printf("Quantidade de números entre 100 e 200: %d\n", cont);
    return 0;
}