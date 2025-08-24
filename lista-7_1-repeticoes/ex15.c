/*15 - Faça um algoritmo que receba vários números, calcule e mostre:
 - A soma dos números digitados;
 - A quantidade de números digitados;
 - A média dos números digitados
 - O maior número digitado;
 - O menor número digitado;
 - A média dos números pares;
 - A percentagem dos números ímpares entre todos os números digitados.
Finaliza a entrada de dados com a digitação do número 30000 (Não considerar esse valor nos cálculos).*/

#include <stdio.h>
#include <math.h>

int main() {
    float num, soma = 0, media, maior = -INFINITY, menor = INFINITY, mediaPares, somaPares = 0, percentImpares;
    int qtdValores = 0, qtdPares = 0, qtdImpares = 0;
    
    do{
        printf("Digite um número: ");
        scanf("%f", &num);
        if(num != 30000){
            soma += num;
            qtdValores++;
            if(num > maior)
                maior = num;
            if(num < menor)
                menor = num;
            if((int)num % 2 == 0){
                somaPares += num;
                qtdPares++;
            }
            if((int)num % 2 != 0)
                qtdImpares++;
        }
        
    } while(num != 30000);
    media = soma / qtdValores;
    mediaPares = somaPares / qtdPares;
    percentImpares = qtdImpares * 100 / qtdValores;
    
    printf("\nSoma dos valores: %.2f\n", soma);
    printf("Quantidade de valores: %d\n", qtdValores);
    printf("Média dos valores: %.2f\n", media);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média dos valores pares: %.2f\n", mediaPares);
    printf("Porcentagem de ímpares: %.2f%%\n", percentImpares);
    
    return 0;
}