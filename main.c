/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float saldo;
    float valor;
    int numero;
    
    printf("digite o valor do seu saldo \n");
    scanf("%f", &saldo);
    printf("opção 1: deseja realizar um saque? \n");
    printf("opção 2: deseja realizar um depósito? \n");
    printf("digite o número para continuar \n");
    scanf("%d",&numero);
    if(numero == 1){
        printf("digite o valor do saque \n");
        scanf("%f", &valor);
        if(valor > saldo){
            printf("saldo insuficiente \n");
        }else{ 
            printf(" saque realizado com sucesso \n");
        }
    }
    if(numero == 2){
        printf("digite o valor do depósito \n");
        scanf("%f",&valor);
        if(valor>300)
        printf("erro \n");
        }else{ 
            printf("depósito realizado com sucesso \n");
}
    

    return 0;
}