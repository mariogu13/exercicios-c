/*12. Escreva um algoritmo para ler o número total de eleitores de um município, 
o número de votos brancos, nulos e válidos. Calcular e mostrar o percentual dos votos brancos, 
nulos e válidos em relação ao total de eleitores. Utilize modularização  por função para realizar 
o cálculo do percentual e retorná-lo. Obs.: faça apenas uma função para realizar o cálculo de percentual, 
essa será reutilizada votos brancos, nulos e válidos.*/

#include <stdio.h>

float percentual(int parte, int total)
{
    return (float)parte / total * 100;
}

int main()
{
    int eleitores, brancos, nulos, validos;
    float p_brancos, p_nulos, p_validos;
    printf("Digite total de eleitories: ");
    scanf("%d", &eleitores);
    printf("Digite numero de votos brancos: ");
    scanf("%d", &brancos);
    printf("Digite numero de votos nulos: ");
    scanf("%d", &nulos);
    printf("Digite numero de votos validos: ");
    scanf("%d", &validos);
    p_brancos = percentual(brancos,eleitores);
    printf("Percentual de brancos: %.2f%%\n",p_brancos);
    p_nulos = percentual(nulos,eleitores);
    printf("Percentual de nulos: %.2f%%\n",p_nulos);
    p_validos = percentual(validos,eleitores);
    printf("Percentual de validos: %.2f%%\n",p_validos);

    return 0;
}