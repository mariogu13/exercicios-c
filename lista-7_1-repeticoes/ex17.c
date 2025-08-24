/*17 - Foi feita uma pesquisa de audiência de canal de TV em várias casas de certa cidade,
num determinado dia. Cada uma das visitadas, é fornecido o número do canal (4, 5, 7, 12)
e o número de pessoas que estavam assistindo naquela casa. Se a televisão estivesse desligada,
nada era anotado, ou seja, esta casa não estava na pesquisa. Faça um algoritmo que:
Leia um número indeterminado de dados (número de canal e o número de pessoas que estavam assistindo);
 - Calcule a porcentagem de audiência para cada canal.
 - Para encerrar a entrada de dados digite o número do canal ZERO.*/

 #include <stdio.h>

int main() {
    int canal, pessoas, i=1, qtd4=0, qtd5=0, qtd7=0, qtd12=0, totalPessoas=0;
    float percent4, percent5, percent7, percent12;
    
    do{
        printf("CASA %d\n", i);
        printf("Digite o número do canal: ");
        scanf("%d", &canal);
        if(canal == 0) break;
        if(canal == 4 || canal == 5 || canal == 7 || canal == 12){
            printf("Digite o número de telespectadores: ");
            scanf("%d", &pessoas);
            printf("\n");
            if(canal == 4)
                qtd4 += pessoas;
            if(canal == 5)
                qtd5 += pessoas;
            if(canal == 7)
                qtd7 += pessoas;
            if(canal == 12)
                qtd12 += pessoas;
            totalPessoas += pessoas;
            i++;
        } else{
            printf("Canal inválido!\n");
        }
    } while(canal != 0);
    
    percent4 = (float)qtd4 * 100 / totalPessoas;
    percent5 = (float)qtd5 * 100 / totalPessoas;
    percent7 = (float)qtd7 * 100 / totalPessoas;
    percent12 = (float)qtd12 * 100 / totalPessoas;
    
    printf("Porcentagens De Audiência\n");
    printf("Canal 4: %.2f%%\n", percent4);
    printf("Canal 5: %.2f%%\n", percent5);
    printf("Canal 7: %.2f%%\n", percent7);
    printf("Canal 12: %.2f%%\n", percent12);
    
    return 0;
}