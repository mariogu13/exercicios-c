/*6. Construa  uma função para calcular o fatorial de número N e retornar a resposta.*/

#include <stdio.h>

int fatorial(int n){
    int fat=1;
    
    if(n>0){
        while(n>1){
            fat *= n;
            n--;
        }
    }
    return fat;
}

int main(){
    printf("%d", fatorial(5));
    return 0;
}