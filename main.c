/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf("insira o melhor volume de LOTR \n");
    scanf("%d",&numero);
    switch(numero){
        case 1:
        printf("sociedade do anel \n");
    break;
        case 2:
        printf("duas torres \n");
    break;
        case 3:
        printf("o retorno do rei \n");
    break;
        default:
        printf("filme não existe \n");
        break;
    
    }

    return 0;
}