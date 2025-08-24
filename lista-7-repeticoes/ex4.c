/*4. Elabore um algoritmo que imprima todos os números pares compreendidos entre 85 e 907.
O programa deve também calcular e mostrar a soma desses valores.*/

#include <stdio.h>

int main() {
    int i, soma=0;
    
    for(i=86; i<=906; i+=2){
        if(i%2==0){
            printf("%d\n", i);
            soma += i;
        }
    }
    
    printf("Soma: %d", soma);

    return 0;
}