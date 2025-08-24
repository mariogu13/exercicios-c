/*5. Faça uma função que transforme e mostre segundos em horas, minutos e segundos.
A informação necessária para o cálculo deve ser passada como parâmetro, não havendo 
variáveis globais.*/

#include <stdio.h>

void transforma(int seg)
{
    int horas,minutos,segundos;

    horas = seg / 3600;
    printf("Horas: %d\n",horas);
    seg = seg % 3600;
    minutos = seg / 60;
    printf("Minutos: %d\n",minutos);
    segundos = seg % 60;
    printf("Segundos: %d\n",segundos);
}


int main()
{
    transforma(19422);

    return 0;
}