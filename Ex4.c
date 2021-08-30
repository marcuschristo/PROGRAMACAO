#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float a, b, c, d, media;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
printf("Digite o primeiro numero: ");
scanf("%f", &a);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
printf("Digite o segundo numero: ");
scanf("%f", &b);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
printf("Digite o terceiro numero: ");
scanf("%f", &c);

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
printf("Digite o quarto numero: ");
scanf("%f", &d);

//Faz a soma dos valores obtidos acima
media = (a + b + c + d) / 4;

// Exibe o resultado final
printf("A média entre %.1f, %.1f, %.1f e %.1f e igual a %.2f", a, b, c, d, media);

return 0;
}