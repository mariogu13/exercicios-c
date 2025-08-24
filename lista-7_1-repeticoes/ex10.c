/*10 - Criar um algoritmo que deixe entrar com 10 números positivos e
imprima raiz quadrada de cada número. Para cada entrada de dados
deverá haver um trecho de proteção para que um número negativo não seja aceito.*/

#include <stdio.h>
#include <math.h>

int main() {
    int i;
    float num, raiz;
    
    for(i = 1; i <= 10; i++){
        printf("Digite um número positivo: ");
        scanf("%f", &num);
        if(num < 0){
            printf("Números negativos não permitidos!");
            break;
        } else{
            raiz = sqrtf(num);
            printf("Raiz quadrada: %f\n", raiz);
        }
    }
    return 0;
}