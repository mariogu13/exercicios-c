/*9. Determinada empresa vende 40 artigos diferentes. 
A empresa identifica cada artigo por um código. 
Escreva um algoritmo para imprimir o código e o preço dos três artigos mais caros.*/

#include <stdio.h>
#define QTD_ARTIGOS 40

int main() {
    int codigos[QTD_ARTIGOS], i, j, tempCodigo;
    float precos[QTD_ARTIGOS], tempPreco;
    
    for(i = 0; i < QTD_ARTIGOS; i++){
        printf("Digite o código do artigo %d: ", i);
        scanf("%d", &codigos[i]);
        printf("Digite o preço do artigo %d: ", i);
        scanf("%f", &precos[i]);
    }
    
    for(i = 0; i < QTD_ARTIGOS - 1; i++){
        for(j = i + 1; j < QTD_ARTIGOS; j++){
            if(precos[j] > precos[i]){
                tempPreco = precos[i];
                precos[i] = precos[j];
                precos[j] = tempPreco;
                tempCodigo = codigos[i];
                codigos[i] = codigos[j];
                codigos[j] = tempCodigo;
            }
        }
    }
    printf("Os 3 artigos mais caros\n");
    for(i = 0; i < 3; i++){
        printf("Código: %d | Preço: %.2f\n", codigos[i], precos[i]);
    }

    return 0;
}