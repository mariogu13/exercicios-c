/*3 - Faça um algoritmo que receba a hora de início de um jogo e a hora final do jogo
(cada hora é composta por duas variáveis inteiras: hora e minuto).
Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o tempo máximo de
duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.*/

#include <stdio.h>

int main() {
    int hInicial, mInicial, hFinal, mFinal, inicio, fim, duracao, horas, minutos;
    
    printf("Digite a hora e o minuto de início: ");
    scanf("%d %d", &hInicial, &mInicial);
    printf("Digite a hora e o minuto de fim: ");
    scanf("%d %d", &hFinal, &mFinal);
    
    inicio = hInicial * 60 + mInicial;
    fim = hFinal * 60 + mFinal;
    
    if(fim <= inicio){
        fim += 1440;
    }
    
    duracao = fim - inicio;
    horas = duracao / 60;
    minutos = duracao % 60;

    printf("A duração do jogo foi de %d horas e %d minutos", horas, minutos);

    return 0;
}