/*4 - Uma empresa decidiu fazer um levantamento em relação 
aos candidatos que se apresentarem para preenchimento de 
vagas no seu quadro de funcionários. Supondo que você seja o 
programador dessa empresa, faça um programa que:
Leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no serviço (S ou N). 
Para encerrar a entrada de dados digite zero para a idade.

Calcule e mostre:
- O número de candidatos do sexo feminino;
- O número de candidatos do sexo masculino;
- A idade média dos homens que já tem experiência no serviço;
- A percentagem dos homens com mais de 45 anos entre o total dos homens;
- O número de mulheres com idade inferior a 35 anos e com experiência no serviço;
- A menor idade entre as mulheres que já tem experiência no serviço.*/

#include <stdio.h>
#include <math.h>

int main() {
    int idade, i=1, qtdF=0, qtdM=0, somaIddMS=0, qtdMS=0, qtdM45=0, qtdFS35=0;
    float iddMediaMS, percentM45, menorIddFS = INFINITY;
    char sexo, experiencia;
    
    while(1){
        printf("CANDIDATO %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        if(idade == 0)
            break;
        printf("Sexo [M] / [F]: ");
        scanf(" %c", &sexo);
        printf("Experiência [S] / [N]: ");
        scanf(" %c", &experiencia);
        printf("\n");
        
        if(sexo == 'F')
            qtdF++;
        if(sexo == 'M')
            qtdM++;
        if(sexo == 'M' && experiencia == 'S'){
            somaIddMS += idade;
            qtdMS++;
        }
        if(sexo == 'M' && idade > 45)
            qtdM45++;
        if(sexo == 'F' && idade < 35 && experiencia == 'S')
            qtdFS35++;
        if(sexo == 'F' && experiencia == 'S'){
            if(idade < menorIddFS)
                menorIddFS = idade;
        }
        i++;
    }
    iddMediaMS = (float)somaIddMS / qtdMS;
    percentM45 = (float)qtdM45 * 100 / qtdM;
    
    printf("Quantidade de candidatos do sexo feminino: %d\n", qtdF);
    printf("Quantidade de candidatos do sexo masculino: %d\n", qtdM);
    printf("Idade média dos homens com experiência: %.2f\n", iddMediaMS);
    printf("Porcentagem de homens com mais de 45 anos (em relação à quantidade total de homens: %.2f%\n", percentM45);
    printf("Quantidade de mulheres com experiência e com menos de 35 anos: %d\n", qtdFS35);
    printf("Menor idade entre as mulheres com experiência: %.2f\n", menorIddFS);
    
    return 0;
}