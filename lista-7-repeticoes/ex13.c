/*13. Construa uma função que, para a progressão geométrica 3, 9, 27,81, ..., 6561,
determine a soma de seus termos. Construa uma função de forma a não utilizar a
fórmula de soma dos termos (Faça com que o computador gere cada termo a ser somando).*/

#include <stdio.h>

int soma(){
    int i, sum=0;
    for(i=3; i<=6561; i*=3){
        sum += i;
    }
    
    return sum;
}

int main() {
    printf("%d", soma());

    return 0;
}