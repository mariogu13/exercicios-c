/*6. Faça um algoritmo que receba o valor do salário mínimo, o turno de trabalho
(M – matutino, V – vespertino ou N – noturno), a categoria (O – operário, G – gerente)
e o número de horas trabalhadas no mês de um funcionário. Suponha a digitação apenas de
dados válidos e, quando houver a digitação de letras, utilize maiúsculas. Calcule e mostre:

- O coeficiente do salário, de acordo com os dados a seguir:
Turno de Trabalho   | Valor do coeficiente
M-Matutino          | 10% do salário mínimo
V-Vespertino        | 15% do salário mínimo
N-Noturno           | 12% do salário mínimo

- O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo
valor do coeficiente do salário.

- O imposto, de acordo com a tabela a seguir:
Categoria   | Salário Bruto | Imposto sobre o salário bruto
O-Operário  | < R$ 300      | 5%
O-Operário  | >= R$ 300,00  | 3%
G-Gerente   | >= R$ 400,00  | 6%
G-Gerente   | <400,00       | 4%

- A gratificação, de acordo com as regras que seguem:
Se o funcionário preencher todos os requisitos a seguir, sua gratificação será de R$ 50,00,
caso contrário, será de R$ 30,00. Os requisitos são:
    * Turno: Noturno
    * Número de horas trabalhadas: Superior a 80 horas

- O auxílio alimentação, de acordo com as seguintes regras:
Se o funcionário preencher algum dos requisitos, seu auxílio alimentação será de um terço
do seu salário bruto; caso contrário será de metade de seu salário bruto. Os requisitos são:
    * Categoria: Operário
    * Coeficiente de salário: <= 25

- O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio alimentação.*/

#include <stdio.h>

float coeficiente(char turno, float salarioMin){
    float coef;
    switch(turno){
        case 'M':
            coef = salarioMin * 0.1;
            printf("Coeficiente: %.2f\n", coef);
            return coef;
            break;
        case 'V':
            coef = salarioMin * 0.15;
            printf("Coeficiente: %.2f\n", coef);
            return coef;
            break;
        case 'N':
            coef = salarioMin * 0.12;
            printf("Coeficiente: %.2f\n", coef);
            return coef;
            break;
        default:
            printf("Turno Inválido!\n");
            return 0;
    }
}

float salarioBruto(float horas, float coef){
    float salarioBruto = horas *coef;
    printf("Salário Bruto: %.2f\n", salarioBruto);
    return salarioBruto;
}

float imposto(char categoria, float salarioBruto){
    float imposto;
    if(categoria == 'O' && salarioBruto >= 300){
        imposto = salarioBruto * 0.05;
        printf("Imposto: %.2f\n", imposto);
        return imposto;
    } else if(categoria == 'O' && salarioBruto < 300){
        imposto = salarioBruto * 0.03;
        printf("Imposto: %.2f\n", imposto);
        return imposto;
    } else if(categoria == 'G' && salarioBruto >= 400){
        imposto = salarioBruto * 0.06;
        printf("Imposto: %.2f\n", imposto);
        return imposto;
    } else if(categoria == 'G' && salarioBruto < 400){
        imposto = salarioBruto * 0.04;
        printf("Imposto: %.2f\n", imposto);
        return imposto;
    } else{
        printf("Categoria Inválida!\n");
        return 0;
    }
}

float gratificacao(char turno, float horas){
    float gratificacao;
    if(turno == 'N' && horas > 80){
        gratificacao = 50;
        
    } else{
        gratificacao = 30;
    }
    printf("Gratificação: %.2f\n", gratificacao);
    return gratificacao;
}

float auxilioAlimentacao(char categoria, float coeficiente, float salarioBruto){
    float auxilio;
    if(categoria == 'O' || coeficiente <= 25){
        auxilio = salarioBruto / 3;
    } else{
        auxilio = salarioBruto / 2;
    }
    printf("Auxílio Alimentação: %.2f\n", auxilio);
    return auxilio;
}

int main(){
    float salarioMinimo, horasMes; 
    char turno, categoria;
    
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o valor de horas trabalhadas no mês: ");
    scanf("%f", &horasMes);
    printf("Digite o turno: ");
    scanf(" %c", &turno);
    printf("Digite a categoria: ");
    scanf(" %c", &categoria);
    
    float coef = coeficiente(turno, salarioMinimo);
    float salarioB = salarioBruto(horasMes, coef);
    float imp = imposto(categoria, salarioB);
    float gratif = gratificacao(turno, horasMes);
    float auxilio = auxilioAlimentacao(categoria, coef, salarioB);
    float salarioLiquido = salarioB - imp + gratif + auxilio;
    printf("Salário Líquido: %.2f", salarioLiquido);
    return 0;
}