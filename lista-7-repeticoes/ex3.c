/*3. Faça um algoritmo que some todos os números compreendidos entre -10 à 100 e exiba o resultado.*/

#include <stdio.h>

int main() {
    int i, soma=0;
    
    for(i=-10; i<=100; i++)
        soma += i;
    
    printf("Soma: %d", soma);

    return 0;
}