/*1. Uma empresa de vendas oferece para seus clientes um desconto que é
função do valor da compra do cliente. Esse desconto é de 20% se o valor
da compra for maior ou igual a $5000.00 e de 15% se for menor.
O algoritmo deve imprimir o valor da compra e o desconto obtido por um determinando cliente.*/

#include <stdio.h>

int main(){
    float valorCompra, desconto, valorFinal;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    if(valorCompra >= 5000){
        desconto = valorCompra * 0.2;
    } else{
        desconto = valorCompra * 0.15;
    }
    valorFinal = valorCompra - desconto;
    printf("Desconto: R$%.2f\n", desconto);
    printf("Valor Final: R$%.2f\n", valorFinal);
    
    return 0;
}