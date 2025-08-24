/*11 - Criar um algoritmo que leia vários números inteiros
e apresente o fatorial de cada número. O algoritmo se encerra
quando se digita um número menor do que 1.*/

#include <stdio.h>

int fat(int num){
    int i, fatorial = 1;
    for(i = num; i > 1; i--){
        fatorial *= i;
    }
}

int main() {
    int num;
    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        if(num > 0)
            printf("%d! = %d\n", num, fat(num));
    } while(num > 0);
    
    return 0;
}