#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float a, b, imc;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
printf("Digite o peso:");
scanf("%f", &a);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
printf("Digite a altura:");
scanf("%f", &b);

//Faz a soma dos valores obtidos acima
imc = a / (b * b);

// Exibe o resultado final
printf("IMC %.2f", imc);

return 0;
}