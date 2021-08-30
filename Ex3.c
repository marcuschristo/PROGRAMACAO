#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float b, h, multiplica;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
printf("Digite o primeiro numero: ");
scanf("%f", &b);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "h"
printf("Digite o primeiro numero: ");
scanf("%f", &h);

//Faz a soma dos valores obtidos acima
multiplica = (b * h) / 2;

// Exibe o resultado final
printf("A area do triângulo retângulo de base %.1f e altura %.1f e igual a %.2f", b, h, multiplica);

return 0;
}