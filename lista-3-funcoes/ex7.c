/*7. Faça uma função que retorne a média de quatro números reais passados como parâmetro.*/

#include <stdio.h>


float media(float x, float y, float z, float w)
{
    float m;
    m = (x+y+z+w)/4;
    return m;
}

int main()
{
    float n1, n2, n3, n4,m;
    printf("Digite quatro valores reais: ");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    m = media(n1,n2,n3,n4);
    printf("Media: %.2f\n",m);

    return 0;
}