#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float a, b, conversao;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
printf("Digite a cotacao do dolar do dia: ");
scanf("%f", &a);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
printf("Digite a quantidade de dolares: ");
scanf("%f", &b);


//Faz a soma dos valores obtidos acima
conversao = a * b;

// Exibe o resultado final
printf("O valor do dolar solicitado e de R$%.2f", a, b, conversao);

return 0;
}