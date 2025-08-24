/*10. Construa um algoritmo que solicite a quantidade (N) de números que serão lidos,
para este grupo de N valores reais, determine o valor máximo e o valor mínimo.*/

#include <stdio.h>

int main() {
    int i, j;
    float n, maior, menor;
    
    printf("Digite a quantidade de números que serão lidos: ");
    scanf("%d", &j);
    
    if(j<1)
        return 0;
    
    printf("Digite um número real: ");
    scanf("%f", &n);
    maior = n;
    menor = n;
    
    for(i=2; i<=j; i++){
        printf("Digite um número real: ");
        scanf("%f", &n);
        if(n<menor)
            menor=n;
        if(n>maior)
            maior=n;
    }
    
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    return 0;
}