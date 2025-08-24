/*2 - Faça um programa que receba uma senha formada de quatro números inteiros,
verifique se a senha está correta e, caso não esteja, solicite novamente a senha.
Se a senha entrada for a correta, deverá ser apresentada a mensagem “Senha Correta”,
caso contrário, “Senha Incorreta”.*/

#include <stdio.h>
#define SENHA 1234

int main() {
    int senhaDigitada;
    do{
        printf("Digite a senha de 4 dígitos: ");
        scanf("%d", &senhaDigitada);
        if(senhaDigitada != SENHA)
            printf("Senha incorreta!\n");
    } while(senhaDigitada != SENHA);
    printf("Senha correta!");
    return 0;
}