/*9 - Chico tem 1.50m e cresce 2 centímetros por ano,
enquanto Juca tem 1.10m e cresce 3 centímetros por ano.
Construir um algoritmo que calcule e imprima quantos anos
serão necessários para que Juca seja maior que Chico.*/

#include <stdio.h>
#define CRESC_CHICO 0.02
#define CRESC_JUCA 0.03

int main() {
    float alturaChico = 1.5, alturaJuca = 1.1;
    int anos=0;
    while(alturaJuca < alturaChico){
        anos++;
        alturaChico+=CRESC_CHICO;
        alturaJuca+=CRESC_JUCA;
    }
    printf("São necessários %d anos para Juca ser maior que Chico.", anos);
    return 0;
}