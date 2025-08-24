/*12. Faça uma função que receba como parâmetro um valor N inteiro e positivo,
calcule e mostre o valor de E, conforme a fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + ... 1/N!*/

#include <stdio.h>

int fatorial(int n){
    int fat=1;
    while(n>1){
        fat *= n;
        n--;
    }

    return fat;
}

int main(){
    int n, i;
    float E=1;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        E += 1 / (float)fatorial(i);
        
    printf("E = %f\n", E);
    return 0;
}