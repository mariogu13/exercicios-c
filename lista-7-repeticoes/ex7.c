/*7. Para uma turma de 62 alunos, construir um algoritmo que determine: 
(a) Idade media dos alunos com altura menor que 1.70;
(b) A altura media dos alunos com mais de vinte anos.*/

#include <stdio.h>

int main(){
    int i, idade, menorAltura=0, somaIdade=0, maiorIdade=0;
    float altura, iddMedia, somaAltura=0, alturaMedia;
    
    for(i=1; i<=62; i++){
        printf("Digite a altura do aluno (m): ");
        scanf("%f", &altura);
        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);
        if(altura<1.70){
            menorAltura++;
            somaIdade += idade;
        }
        if(idade>20){
            maiorIdade++;
            somaAltura += altura;
        }
    }
    iddMedia = somaIdade / menorAltura;
    alturaMedia = somaAltura / maiorIdade;
    
    printf("Idade média dos menores que 1.7m: %.2f\n", iddMedia);
    printf("Altura média dos maiores de 20 anos: %.2f\n", alturaMedia);
    return 0;
}