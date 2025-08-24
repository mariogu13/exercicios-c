/*2. Construa uma função que receba o salário e categoria de um funcionário,
se a categoria for = “m” de mensalista, conceder 10% de aumento e retorne o valor reajustado,
se for = “h” de horista, conceder 20% de aumento e retorne o valor reajustado,
se não for “m” nem “h”, exibir a mensagem categoria inválida e retorne o valor -1
(utilize o comando switch).*/

#include <stdio.h>

int main() {
    float salario;
    char categoria;
    
    printf("Digite o salário: ");
    scanf("%f", &salario);
    printf("Digite a categoria: ");
    scanf(" %c", &categoria);
    
    switch(categoria){
        case 'h':
        case 'H':
            salario += (salario / 5);
            printf("Salário reajustado: %.2f", salario);
            break;
        case 'm':
        case 'M':
            salario += (salario / 10);
            printf("Salário reajustado: %.2f", salario);
            break;
        default:
            printf("Categoria inválida\n");
            printf("-1\n");
    }
    
    return 0;
}