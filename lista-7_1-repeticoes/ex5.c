/*5 - Entrar com vários números positivos e imprimira média dos números digitados.*/

#include <stdio.h>

int main() {
    float num, media, soma = 0;
    int cont = 0;
    do{
        printf("Digite um número real: ");
        scanf("%f", &num);
        if(num > 0){
            cont++;
            soma+=num;
        }
    } while(num > 0);
    media = soma / cont;
    printf("Média: %.2f\n", media);
    return 0;
}