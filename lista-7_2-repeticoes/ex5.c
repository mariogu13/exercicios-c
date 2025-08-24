/*5 - Faça um programa que receba de 10 pessoas: idade, sexo, peso e altura.
Calcule e mostre:
- A média das idades das 10 pessoas;
- A quantidade de pessoas com peso superior a 90kg e altura inferior a 1.50m;
- A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1.90m;
- A idade média das mulheres;
- A idade média dos homens.*/

#include <stdio.h>
#define QTD_PESSOAS 3

int main() {
    int i, idade, somaIdd=0, qtdP90A50=0, qtdA90=0, qtd1030=0, somaIddF=0, somaIddM=0, qtdF=0, qtdM=0;
    float peso, altura, mediaIdd, percent1030, iddMediaF, iddMediaM;
    char sexo;
    
    for(i = 1; i<= QTD_PESSOAS; i++){
        printf("Pessoa %d\n", i);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o sexo (M / F): ");
        scanf(" %c", &sexo);
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);
        printf("Digite a altura (m): ");
        scanf("%f", &altura);
        printf("\n");
        somaIdd += idade;
        if(peso > 90 && altura < 1.5)
            qtdP90A50++;
        if(altura > 1.9)
            qtdA90++;
        if(idade >= 10 && idade <= 30)
            qtd1030++;
        if(sexo == 'M'){
            somaIddM += idade;
            qtdM++;
        }
        if(sexo == 'F'){
            somaIddF += idade;
            qtdF++;
        }
    }
    mediaIdd = (float)somaIdd / QTD_PESSOAS;
    percent1030 = (float)qtd1030 * 100 / qtdA90;
    iddMediaM = (float)somaIddM / qtdM;
    iddMediaF = (float)somaIddF / qtdF;
    printf("Média das idades: %.2f\n", mediaIdd);
    printf("Quantidade de pessoas com mais de 90kg e menos de 1.5m: %d\n", qtdP90A50);
    printf("Porcentagem de pessoas entre 10 e 30 anos entre as pessoas que medem mais de 1.9m: %.2f%%\n", percent1030);
    printf("Idade média das mulheres: %.2f\n", iddMediaF);
    printf("Idade média dos homens: %.2f\n", iddMediaM);
    return 0;
}