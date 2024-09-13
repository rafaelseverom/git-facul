/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main(){
    float a;
    float multi, soma, sub, ele, div, raiz;
    int b;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    if(b != 0){
    }else{
    printf("divisao por zero nao e permitido\n");
    return 1;
    }

        

   
    multi = a * b;
    soma = a + b;
    sub = a - b;
    ele = pow(a, b);
    div = a / b;
    raiz = sqrt(b);
     printf("a multiplicado por b e :%f \n", multi);
      printf("a soma de a e b e %f \n", soma);
       printf("a subtracao de a e b e %F \n", sub);
        printf("a elevado em b e %f \n", ele);
        printf("a dividido por b e %f, com mais tres casas decimais e: %.3F \n", div);
        printf(" raiz qudrada de b e %f \n", raiz);

    return 0;
}
