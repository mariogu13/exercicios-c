/*15. Em um campeonato de futebol existem cinco times e cada time possui onze jogadores.
Faça um algoritmo que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
- A quantidade de jogadores com idade inferior a 18 anos;
- A média das idades dos jogadores de cada time;
- A média das alturas de todos os jogadores do campeonato;
- A percentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato.*/

#include <stdio.h>

int main() {
    int i, idade, qtdMenor18=0, somaIddA=0, somaIddB=0, somaIddC=0, somaIddD=0, somaIddE=0, qtdMaior80=0;
    float peso, altura, mediaIddA, mediaIddB, mediaIddC, mediaIddD, mediaIddE, mediaAltura, somaAltura=0, percentMaior80;
    
    for(i=1; i<=55; i++){
        printf("Digite a idade do jogador: ");
        scanf("%d", &idade);
        printf("Digite o peso do jogador: ");
        scanf("%f", &peso);
        printf("Digite a altura do jogador: ");
        scanf("%f", &altura);
        
        if(idade<18)
            qtdMenor18++;
        if(i<=11)
            somaIddA += idade;
        else if(i<=22)
            somaIddB += idade;
        else if(i<=33)
            somaIddC += idade;
        else if(i<=44)
            somaIddD += idade;
        else if(i<=55)
            somaIddE += idade;
       
        somaAltura+=altura; 
       
        if(peso>80)
            qtdMaior80++;
    }
    
    mediaIddA = somaIddA / 11;
    mediaIddB = somaIddB / 11;
    mediaIddC = somaIddC / 11;
    mediaIddD = somaIddD / 11;
    mediaIddE = somaIddE / 11;
    mediaAltura = somaAltura / 55;
    percentMaior80 = qtdMaior80 * 100 / 55;
    
    printf("Quantidade de jogadores menores de 18 anos: %d\n", qtdMenor18);
    printf("Média das idades dos jogadores do time A: %.2f\n", mediaIddA);
    printf("Média das idades dos jogadores do time B: %.2f\n", mediaIddB);
    printf("Média das idades dos jogadores do time C: %.2f\n", mediaIddC);
    printf("Média das idades dos jogadores do time D: %.2f\n", mediaIddD);
    printf("Média das idades dos jogadores do time E: %.2f\n", mediaIddE);
    printf("Média da altura dos jogadores: %.2f\n", mediaAltura);
    printf("Porcentagem de jogadores com mais de 80kg: %.2f%\n", percentMaior80);

    return 0;
}