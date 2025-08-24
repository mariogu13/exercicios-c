/*6. Faça uma função que retorne a soma de três números reais passados como parâmetro.*/

#include <stdio.h>

float soma(float a, float b, float c)
{
    float s;
    s = a+b+c;
    return s;
}

int main()
{
    float r,x=10.0,y=7.9,z=9.0;

    r = soma(x,y,z);
    printf("Resultado: %.2f\n",r);

    r = soma(10.0,7.9,z);
    printf("Resultado: %.2f\n",r);

    r = soma(5.0+5.0,7.9,z);
    printf("Resultado: %.2f\n",r);

    return 0;
}