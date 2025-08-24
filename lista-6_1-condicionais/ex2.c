/*2 - Um professor deseja digitar 4 notas de alunos. A primeira nota representa 15%,
a segunda representa 20%, a terceira representa 25%, a quarta 40%. Informe a média do aluno.
Caso a média seja superior ou igual 7, informar que o aluno está aprovado. Se a média for
inferior a 7 e superior a 2, informar que terá que fazer uma avaliação final,
e dizer a nota mínima necessária para ser aprovado, sendo que a média representa 60% e a prova final
representa 40% (Considerar que a aprovação por prova final é 5).*/

// Verificar??
#include <stdio.h>

int main(){
    float n1,n2,n3,n4,media,prova;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    media = (1.5*n1 + 2*n2 + 2.5*n3 + 4*n4)/10;
    printf("Média: %.2f\n", media);
    
    if(media >= 7){
        printf("Aluno aprovado!\n");
    } else if(media < 7 && media > 2){
        printf("Avaliação final necessária!\n");
        media *= 0.6;
        prova = 7 - media;
        printf("É necessário tirar no mínimo %.2f pontos para ser aprovado!", prova);
    } else{
        printf("Aluno reprovado!\n");
    }
    
    return 0;
}