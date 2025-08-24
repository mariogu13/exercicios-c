/*18 - Crie uma função para cada item do menu, as informações necessárias para
realização dos cálculos devem ser passadas por parâmetros. 
Faça um programa que apresente o menu de opções a seguir,
que permita ao usuário escolher a opção desejada, receba os dados necessários
para executar a operação e mostre o resultado. Verificar a possibilidade de
opção inválida e não se preocupar com as restri-ções, como salário inválido.

Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair

Digite a opção desejada

Na opção 1: receber o salário de um funcionário, calcular e
mostrar o novo salário usando as regras a seguir:

SALÁRIOS                    | PERCENTAGEM DE AUMENTO
Até R$ 350,00               | 15%
De R$ 350,00 a R$ 600,00    | 10%
Acima de R$ 600,0           | 05%

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias.
Sabe-se que as férias equivalem ao seu salário acrescido de 1/3.

Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa,
no máximo 12, calcular e mostrar o valor do décimo terceiro.
Sabe-se que o décimo terceiro equivale ao seu salário multiplicado pelo número de
meses de trabalho dividido por 12.

Na opção 4: sair do programa.*/

#include <stdio.h>

void novoSalario(float salario){
    float salarioAjustado;
    if(salario < 350)
        salarioAjustado = salario + (salario * 0.15);
    if(salario >= 350 && salario <= 600)
        salarioAjustado = salario + (salario * 0.1);
    if(salario > 600)
        salarioAjustado = salario + (salario * 0.05);
    printf("Novo Salário: R$%.2f\n", salarioAjustado);
}

void ferias(float salario){
    float valorFerias = salario + (salario / 3);
    printf("Férias: R$%.2f\n", valorFerias);
}

void decimoTerceiro(float salario, float mesesTrabalho){
    if(mesesTrabalho <= 12){
        float valor13 = salario * mesesTrabalho / 12;
        printf("Décimo Terceiro: R$%.2f\n", valor13);
    } else{
        printf("O número de meses de trabalho não pode ser maior que 12!");
    }
}

int main() {
    int opc;
    float salario, mesesTrabalho;
    printf("Selecione a opção desejada\n");
    printf("1. Novo Salário\n");
    printf("2. Férias\n");
    printf("3. Décimo Terceiro\n");
    printf("4. Sair\n");
    scanf("%d", &opc);
    
    switch(opc){
        case 1:
            printf("\nDigite o salário atual: ");
            scanf("%f", &salario);
            if(salario >= 0)
                novoSalario(salario);
        case 2:
            printf("\nDigite o salário atual: ");
            scanf("%f", &salario);
            if(salario >= 0)
                ferias(salario);
        case 3:
            printf("\nDigite o salário atual: ");
            scanf("%f", &salario);
            printf("Digite o número de meses de trabalho: ");
            scanf("%f", &mesesTrabalho);
            if(salario >= 0 && mesesTrabalho >= 0)
                decimoTerceiro(salario, mesesTrabalho);
        case 4: 
            return 0;
        default:
            printf("\nOpção Inválida!\n");
    }
    return 0;
}
