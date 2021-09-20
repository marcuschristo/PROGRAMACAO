#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float a, b, c, d, e, f, somatoria, troco;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
printf("Digite o valor do item 1: ");
scanf("%f", &a);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
printf("Digite o valor do item 2: ");
scanf("%f", &b);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
printf("Digite o valor do item 3: ");
scanf("%f", &c);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "d"
printf("Digite o valor do item 4: ");
scanf("%f", &d);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "e"
printf("Digite o valor do item 5: ");
scanf("%f", &e);

//Faz a soma dos valores obtidos acima
somatoria == a+b+c+d+e;

// Exibe o resultado final
printf("Total somado R$%.2f", a, b, c, d, e, somatoria);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "f"
printf("Digite o valor do seu dinheiro tão suado (R$): ");
scanf("%f", &f);

//Faz a subtração dos valores obtidos acima
troco == f - somatoria;

// Exibe o resultado final
printf("Troco R$%.2f", troco);

return 0;
}