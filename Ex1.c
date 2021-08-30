#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float a, b, multiplica;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
printf("Digite o primeiro numero: ");
scanf("%f", &a);

//Solicita entrada de dados para o usuário e grv o valor digitado em uma variável "b"
printf("Digite o segundo numero: ");
scanf("%f", &b);

//Faz a soma dos valores obtidos acima
multiplica = a * b;

// Exibe o resultado final8
printf("A area do quadrado entre %.1f e %.1f e igual a %.2f", a, b, multiplica);

return 0;
}