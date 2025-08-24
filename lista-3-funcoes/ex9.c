/*9. Faça uma função que retorne a média ponderada de três números reais passados como parâmetro.
Toda informação necessária para o cálculo deve ser passada por parâmetro.*/

#include <stdio.h>

float media_ponderada(float n1, float n2, float n3,
                     float p1, float p2, float p3)
{
    float m;
    m = (n1*p1 + n2 *p2 + n3 * p3)/(p1+p2+p3);
    return m;
}

int main()
{
    float mp;
    mp = media_ponderada(7.0, 8.0, 9.0,
                         5.0,3.0, 2.0 );
    printf("Media ponderada: %.2f\n",mp);
    return 0;
}