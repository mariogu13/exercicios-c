/*11. Faça uma função que calcule a expressão a seguir e retorne o resultado real. 
Expressão: x^3 + y^2+ (x+y+w+k)/4 + w / k. Todos os valores necessários para realizar 
o cálculo da expressão devem ser passados por parâmetro. Obs.: (1) Os valores de x, y, w e k 
são do tipo real. (2) símbolo ^ representa potenciação. (3) use a função criada no exercício 7 
para resolver a expressão  (x+y+w+k)/4. (4) crie duas funções para fazer o cálculo de potenciação 
elevado ao quadrado e ao cubo e use para resolver a expressão.*/

#include <stdio.h>

float pow_3(float n)
{
    return n*n*n;
}

float pow_2(float j)
{
    return j * j;
}

float media(float a, float b, float c, float d)
{
    return (a+b+c+d) / 4;
}

float calcular_expressao(float x, float y,
                        float w, float k)
{
    float e;
    /* e = x^3 + y^2 + (x+y+w+k)/4 + w / k  */
    e = pow_3(x) + pow_2(y) + media(x,y,w,k) + w/k;
    return e;
}

int main()
{
    float x, y, w, k, exp;
    printf("Digite valor para x:");
    scanf("%f", &x);
    printf("Digite valor para y: ");
    scanf("%f", &y);
    printf("Digite valor para w: ");
    scanf("%f",&w);
    printf("Digite valor para k: ");
    scanf("%f", &k);
    exp = calcular_expressao(x,y,w,k);
    printf("Valor expressao: %.2f\n", exp);
    return 0;
}