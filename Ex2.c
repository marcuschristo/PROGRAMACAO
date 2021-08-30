#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float a, multiplica;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
printf("Digite o primeiro numero: ");
scanf("%f", &a);

//Faz a soma dos valores obtidos acima
multiplica = a * a;

// Exibe o resultado final8
printf("A area do quadrado de tamanho %.1f e igual a %.2f", a, multiplica);

return 0;
}