/*1. Considerando como dados as notas de uma determinada turma (56 alunos) em uma prova, 
escreva um algoritmo que imprima aquelas notas que estão acima da média das notas.*/

#include <stdio.h>
#define QTD_ALUNOS 56

int main(){
    float notas[QTD_ALUNOS], soma = 0, media;
    int i;

    printf("Digite as notas dos 56 alunos:\n");
    for(i = 0; i < QTD_ALUNOS; i++) {
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / QTD_ALUNOS;
    printf("\nMédia da turma: %.2f\n", media);

    printf("Notas acima da média:\n");
    for(i = 0; i < QTD_ALUNOS; i++) {
        if(notas[i] > media) {
            printf("Aluno %d: %.2f\n", i+1, notas[i]);
        }
    }
    
    return 0;
}