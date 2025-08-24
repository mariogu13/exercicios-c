/*11. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre
acidentes de trânsito. Foram obtidos os seguintes dados:
a) Código da cidade;
b) Número de veículos de passeio(em 2020);
c) Número de acidentes de trânsito com vítimas (em 2020).
Deseja-se saber:
a) Qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem;
b) Qual a média de veículos nas cinco cidades juntas;
c) Qual a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.
*/

#include <stdio.h>

int main() {
    int i, codigo, veiculos, acidentes, menor, maior, codMenor, codMaior, qtdVeiculos, qtdAcidentes, qtdMenor2000=0;
    float mediaVeiculos, mediaAcidentes;
    
    printf("Código da cidade: ");
        scanf("%d", &codigo);
        printf("Número de veículos de passeio (2020): ");
        scanf("%d", &veiculos);
        printf("Número de acidentes com vítimas (2020): ");
        scanf("%d", &acidentes);
        menor = acidentes;
        maior = acidentes;
        codMaior = codigo;
        codMenor = codigo;
        qtdVeiculos = veiculos;
        if(veiculos<2000){
            qtdAcidentes = acidentes;
            qtdMenor2000++;
        }
            
        
    for(i=2; i<=3; i++){
        printf("Código da cidade: ");
        scanf("%d", &codigo);
        printf("Número de veículos de passeio (2020): ");
        scanf("%d", &veiculos);
        printf("Número de acidentes com vítimas (2020): ");
        scanf("%d", &acidentes);
        if(acidentes>maior){
            maior = acidentes;
            codMaior = codigo;
        } else if(acidentes<menor){
            menor = acidentes;
            codMenor = codigo;
        }
        
        qtdVeiculos += veiculos;
        if(veiculos<2000){
            qtdAcidentes += acidentes;
            qtdMenor2000++;
        }
    }
    
    mediaVeiculos = (float)qtdVeiculos / 3;
    mediaAcidentes = (float)qtdAcidentes / qtdMenor2000;
    
    printf("O maior índice de acidentes é %d da cidade %d.\n", maior, codMaior);
    printf("O menor índice de acidentes é %d da cidade %d.\n", menor, codMenor);
    printf("Média de veículos por cidade: %.2f.\n", mediaVeiculos);
    printf("Média de acidentes em cidades com menos de 2000 veículos: %.2f.\n", mediaAcidentes);
    
    return 0;
}