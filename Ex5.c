#include <stdio.h>

//Função principal do programa
int main(int argc, char *argv[]){

//Declaração de variáveis
float c, Fahrenheit;

//Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "c"
printf("Digite a temperatura em graus Celsius: ");
scanf("%f", &c);

//Faz a soma dos valores obtidos acima
Fahrenheit = (((c * 9) / 5) + 32);

// Exibe o resultado final
printf("%.1f graus Celsius em Fahrenheit e igual %.2f", c, Fahrenheit);

return 0;
}