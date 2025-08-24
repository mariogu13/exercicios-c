/*8. Considerando como dados as notas de uma determinada turma (56 alunos) em um prova,
escreva um algoritmo que imprima a média da notas dessa turma.*/

#include <stdio.h>

int main(){
    int i;
    float nota, soma=0, media;
    
    for(i=1; i<=56; i++){
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma/56;
    printf("Média das notas: %.2f\n", media);
    return 0;
}