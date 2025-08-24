/*4 - Questão
Faça um algoritmo que receba o preço, a categoria (1 limpeza, 2 alimentação ou 3 -vestuário)
e a situação (R - produto que necessitam de refrigeração e N - produtos que não necessitam de
refrigeração). Calcule e mostre:

- O valor do aumento, usando a regra a seguir sobre o preço;
Crie uma função para calcular e retorna o aumento;
PREÇO           |CATEGORIA  | PERCENTUAL DE AUMENTO
< = R$ 25,00    | 1         | 5%
< = R$ 25,00    | 2         | 8%
< = R$ 25,00    | 3         | 10%
> R$ 25,00      | 1         | 12%
> R$ 25,00      | 2         | 15%
> R$ 25,00      | 3         | 18%

- O valor do imposto, usando a seguintes regras;
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5% do preço,
caso contrário pagará 8% do preço. Os requisitos são:
    * Categoria: 2
    * Situação: R
Crie uma função para calcular e retornar o valor do imposto;

- O novo preço, ou seja, o preço mais aumento menos imposto,

- A classificação, de acordo com as regras a seguir.
NOVO PREÇO                  | CLASSIFICAÇÃO
< = R$ 50,00                | Barato
Entre R$ 50,00 e R$ 120,00  | Normal
> = R$ 120,00               | Caro*/

#include <stdio.h>

float aumento(float preco, char categoria){
    float valorAumento;
    if(preco <= 25 && categoria == '1'){
        valorAumento = preco * 0.05;
    } else if(preco <= 25 && categoria == '2'){
        valorAumento = preco * 0.08;
    } else if(preco <= 25 && categoria == '3'){
        valorAumento = preco * 0.10;
    } else if(preco > 25 && categoria == '1'){
        valorAumento = preco * 0.12;
    } else if(preco > 25 && categoria == '2'){
        valorAumento = preco * 0.15;
    } else if(preco > 25 && categoria == '3'){
        valorAumento = preco * 0.18;
    }
    printf("Valor do aumento: %.2f\n", valorAumento);
    return valorAumento;
}

float imposto(float preco, float categoria, float situacao){
    float valorImposto;
    if(categoria == '2' || situacao == 'R'){
        valorImposto = preco * 0.05;
    } else{
        valorImposto = preco * 0.08;
    }
    printf("Valor do imposto: %.2f\n", valorImposto);
    return valorImposto;
}

int main(){
    float preco, novoPreco;
    char categoria, situacao;
    printf("Digite o preço: ");
    scanf("%f", &preco);
    printf("Digite a categoria: ");
    scanf(" %c", &categoria);
    printf("Digite a situação: ");
    scanf(" %c", &situacao);
    
    float valorAumento = aumento(preco, categoria);
    float valorImposto = imposto(preco, categoria, situacao);
    novoPreco = preco + valorAumento - valorImposto;
    printf("Novo preço: %.2f\n", novoPreco);
    if(novoPreco <= 50){
        printf("Classificação: Barato\n");
    } else if(novoPreco > 50 && novoPreco < 120){
        printf("Classificação: Normal\n");
    } else{
        printf("Classificação: Caro\n");
    }
    
    return 0;
}