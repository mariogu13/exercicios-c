/*3 - Faça um algoritmo que receba os dados a seguir de 30 produtos: preço unitário, 
país de origem (1 - EUA, 2- México e 3-outros), meio de transporte 
(T- Terrestre, F - Fluvial e A Aéreo), carga perigosa (S - Sim, N - Não). 
Calcule e mostre para cada produto:

- O valor do imposto calculado usando a tabela a seguir.
    Preço unitário      | Percentual de imposto sobre o preço unitário
    até R$ 100,00       | 5%
    maior que R$ 100,00 | 10%

- O valor de transporte calculado usando a tabela a seguir.
Carga perigosa  | País de origem    | Valor do transporte
S               | 1                 | R$ 50,00
S               | 2                 | R$ 35,00
S               | 3                 | R$ 24,00
N               | 1                 | R$ 12,00
N               | 2                 | R$ 35,00
N               | 3                 | R$ 60,00

- O valor do seguro, calculado usando a regra a seguir:
Os produtos que vêm do México e os produtos que utilizam transporte aéreo
pagam metade do valor do seu preço unitário como seguro.

- O preço final;
- O total dos impostos.*/

#include <stdio.h>

int main() {
    int i, pais;
    float precoUnitario, imposto, valorTransporte, seguro, precoF, impostosT;
    char transporte, perigo;
    
    for(i = 1; i <= 30; i++){
        seguro = 0;
        printf("Produto %d\n", i);
        printf("Digite o preço unitário: ");
        scanf("%f", &precoUnitario);
        printf("Digite o país de origem [1 - EUA, 2 - México, 3 - Outros]: ");
        scanf("%d", &pais);
        printf("Digite o meio de transporte [T - Terrestre, F - Fluvial, A - Aéreo]: ");
        scanf(" %c", &transporte);
        printf("Carga perigosa [S] / [N]: ");
        scanf(" %c", &perigo);
        
        if(precoUnitario <= 100){
            imposto = precoUnitario * 0.05;
        } else{
            imposto = precoUnitario * 0.1;
        }
        if(perigo == 'S' && pais == 1){
            valorTransporte = 50;
        } else if(perigo == 'S' && pais == 2){
            valorTransporte = 35;
        } else if(perigo == 'S' && pais == 3){
            valorTransporte = 24;
        } else if(perigo == 'N' && pais == 1){
            valorTransporte = 12;
        } else if(perigo == 'N' && pais == 2){
            valorTransporte = 35;
        } else if(perigo == 'N' && pais == 3){
            valorTransporte = 60;
        }
        if(pais == 2 || transporte == 'A')
            seguro = precoUnitario / 2;
        impostosT = imposto + valorTransporte + seguro;
        precoF = precoUnitario + impostosT;
        printf("Valor do imposto:    R$%.2f\n", imposto);
        printf("Valor do transporte: R$%.2f\n", valorTransporte);
        printf("Valor do seguro:     R$%.2f\n", seguro);
        printf("Impostos totais:     R$%.2f\n", impostosT);
        printf("Preço final:         R$%.2f\n", precoF);
        printf("\n");
    }

    return 0;
}