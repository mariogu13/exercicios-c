/*2 - Construa um algoritmo que leia 5 conjuntos de 2 valores, 
o primeiro representando a matrícula de um aluno e o segundo 
representando a sua altura em centímetros. 
Encontrar o aluno mais alto e mais baixo e mostrar seus números e suas alturas, 
dizendo se o aluno é o mais alto ou é o mais baixo.*/

#include <stdio.h>
#include <math.h>

int main() {
    int i, matricula, matriculaMaior, matriculaMenor;
    float altura, maior = -INFINITY, menor = INFINITY;

    for(i = 1; i <= 5; i++){
        printf("Digite o número de matrícula: ");
        scanf("%d", &matricula);
        printf("Digite a altura do aluno: ");
        scanf("%f", &altura);
        if(altura > maior){
            maior = altura;
            matriculaMaior = matricula;
        }
        if(altura < menor){
            menor = altura;
            matriculaMenor = matricula;
        }
    }
    printf("Maior aluno:\n");
    printf("Altura: %.2f\n", maior);
    printf("Matrícula: %d\n\n", matriculaMaior);
    printf("Menor aluno:\n");
    printf("Altura: %.2f\n", menor);
    printf("Matrícula: %d\n\n", matriculaMenor);
    return 0;
}