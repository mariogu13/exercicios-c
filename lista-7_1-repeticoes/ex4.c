/*4 - Entrar com números enquanto forem positivos e imprimir quantos números foram digitados.*/

#include <stdio.h>

int main() {
    float num;
    int cont = 0;
    do{
        printf("Digite um número real: ");
        scanf("%f", &num);
        if(num > 0)
            cont++;
    } while(num > 0);
    printf("Quantidade de números digitados: %d", cont);
    return 0;
}