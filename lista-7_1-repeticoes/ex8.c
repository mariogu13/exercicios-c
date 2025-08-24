/*8 - Ler vários números até entrar o número -999
Para cada numero imprimir seus divisores.*/

#include <stdio.h>

int main() {
    int num, i;
    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        if(num != -999){
            printf("Divisores de %d:\n", num);
            for(i = 1; i <= num; i++){
                if(num % i == 0)
                    printf("%d ", i);
            }
            printf("\n\n");
        }
    } while(num != -999);
    
    return 0;
}