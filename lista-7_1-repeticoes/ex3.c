/*3 - Entrar com números e imprimir o triplo de cada numero
O algoritmo acaba quando entrar o numero -999*/

#include <stdio.h>

int main() {
    float num;
    do{
        printf("Digite um número real: ");
        scanf("%f", &num);
        if(num != -999)
            printf("Triplo: %.2f\n", num*3);
    } while(num != -999);
    return 0;
}