/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float A;
    int B;
    float multiplicacao, divisao, soma, subtracao, elevacao;

    // Recebe o valor float
    printf("Digite um numero float (A): ");
    scanf("%f", &A);

    // Recebe o valor inteiro
    printf("Digite um numero inteiro (B): ");
    scanf("%d", &B);

    // Calcula a multiplicação
    multiplicacao = A * B;

    // Calcula a divisão
    if (B != 0) { // Verifica se B é zero para evitar divisão por zero
        divisao = A / B;
    } else {
        printf("Divisao por zero nao permitida!\n");
        return 1; // Termina o programa com um código de erro
    }

    // Calcula a soma
    soma = A + B;

    // Calcula a subtração
    subtracao = A - B;

    // Calcula a exponenciação
    elevacao = pow(A, B);

    // Imprime os resultados
    printf("A multiplicado por B é %.2f...\n", multiplicacao);
    printf("A dividido por B é %.2f, mas com duas casas decimais é %.2f!\n", divisao, divisao);
    printf("A mais B é %.2f e A menos B é %.2f\n", soma, subtracao);
    printf("A elevado a B é %.2f\n", elevacao);

    return 0;


}