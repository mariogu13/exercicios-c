/*10. Faça uma função que calcule a expressão a seguir e retorne o resultado real. 
Expressão: x^3 + y^2+ (x+y+w+k)/4 + w / k. Todos os valores necessários para realizar o 
cálculo da expressão devem ser passados por parâmetro. Obs.: (1) Os valores de x, y, w e k 
são do tipo real. (2) símbolo ^ representa potenciação. (3) use a função criada no exercício 7 
para resolver a expressão  (x+y+w+k)/4.*/

#include <stdio.h>


float result(float x, float y, float k, float w)
{
    float r;
    r = x*x*x + x*x + (x + y + w + k)/4 + w / k;
    return r;
}

int main()
{
    float n1, n2, n3, n4,r;
    printf("Digite valor para x: ");
    scanf("%f",&n1);
    printf("Digite valor para y: ");
    scanf("%f",&n2);

    printf("Digite valor para k: ");
    scanf("%f",&n3);
    printf("Digite valor para w: ");
    scanf("%f",&n4);
    r = result(n1,n2,n3,n4);
    printf("Resultado: %.2f\n",r);

    return 0;
}