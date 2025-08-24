/*7 - Entrar com números e imprimir o quadrado de cada número
até entrar um número múltiplo de 6 que deverá ter seu quadrado também impresso.*/

#include <stdio.h>

int main() {
    int num;
    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        printf("Quadrado: %d\n", num*num);
    } while(num % 6 != 0);
    
    return 0;
}