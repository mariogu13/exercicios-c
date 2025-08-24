/*8. Faça uma função que calcule a expressão a seguir e retorne o resultado real.
Expressão: x^3 + y^2 + w / k. Todos os valores necessários para realizar o cálculo 
da expressão devem ser passados por parâmetro. Obs.: (1) Os valores de x, w e k são 
do tipo real e o valor de y é do tipo inteiro. (2) símbolo ^ representa potenciação.*/

#include <stdio.h>

float calcular_expressao(float x, float w,
                         float k, int y)
{
    float exp;
    exp = x*x*x + y*y + w / k;
    return exp;
}
int main()
{   float e;
    e = calcular_expressao(2.0, 8.0, 4.0,2);
    printf("Valor da expressao: %.2f\n",e);
    return 0;
}