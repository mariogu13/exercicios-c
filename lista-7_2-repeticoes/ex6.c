/*6 - Faça um programa que apresente o menu a seguir,
permita ao usuário escolher a opção desejada,
receba os dados necessários para executar a operação e mostre o resultado.
Verifique a possibilidade de opção inválida e não se preocupe com restrições, como salário negativo.

Menu de opções:
1 – Imposto;
2 – Novo salário;
3 – Classificação

Digite a opção desejada.

Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto
usando as regras a seguir:

Salário                     | Percentual do imposto
Menor que R$ 500,00         | 5%
De R$ 500,00 a R$ 850,00    | 10%
Acima de R$ 850,00          | 15%

Na opção 2: receber o salário de um funcionário e mostrar o aumento usando a tabela a seguir:

Salário                                             | Aumento
Maior que R$ 2.500,00                               | R$ 25,00
De R$ 750,00 (inclusive) a R$ 2.500,00(inclusive)   | R$ 50,00
De R$ 450,00 (inclusive) a R$ 750,00                | R$ 75,00
Menor que R$ 450,00                                 | R$ 100,00

Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir:

Salário                     | Classificação
Até R$ 1700,00 (inclusive)  | Mal remunerado
Maiores que R$ 1700,00      | Bem remunerado

Na opção 4: sair do programa;*/

#include <stdio.h>

void imposto(float salario){
    float valorImposto;
    if(salario  < 500){
        valorImposto = salario * 0.05;
    } else if(salario <= 850){
        valorImposto = salario * 0.1;
    } else{
        valorImposto = salario * 0.15;
    }
    printf("Valor do imposto: R$%.2f\n", valorImposto);
}

void aumento(float salario){
    float valorAumento;
    if(salario > 2500){
        valorAumento = 25;
    } else if(salario >= 750){
        valorAumento = 50;
    } else if(salario >= 450){
        valorAumento = 75;
    } else{
        valorAumento = 100;
    }
    printf("Valor do aumento: R$%.2f\n", valorAumento);
}

void classificacao(float salario){
    if(salario <= 1700){
        printf("Classificação: Mal Remunerado\n");
    } else{
        printf("Classificação: Bem Remunerado\n");
    }
}

int main(){
    int opc;
    float salario;
    
    printf("Digite a opção desejada: \n");
    printf("1. Imposto\n");
    printf("2. Novo Salário\n");
    printf("3. Classificação\n");
    printf("4. Sair\n");
    scanf("%d", &opc);
    
    switch(opc){
        case 1:
            printf("Digite o salário: ");
            scanf("%f", &salario);
            imposto(salario);
            break;
        case 2:
            printf("Digite o salário: ");
            scanf("%f", &salario);
            aumento(salario);
            break;
        case 3:
            printf("Digite o salário: ");
            scanf("%f", &salario);
            classificacao(salario);
            break;
        case 4:
            return 0;
        default:
            printf("Opção Inválida!\n");
    }
    return 0;
}