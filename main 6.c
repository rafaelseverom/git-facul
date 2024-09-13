/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <math.h>
#include <stdio.h>

int main(){
    float a;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    int b;
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    float div = a / b;
    
    printf("%f multiplicado por %d é %f...\n", a, b, (a * b));
    printf("%f dividido por %d é %f, mas com duas casas decimais é %.2f!\n", a, b, div, div);
    printf("%f mais %d é %f e %f menos %d é %f\n", a, b, (a+b), a, b, (a-b));
    printf("%f elevado a %d é %f\n", a, b, pow(a, b));

    return 0;
}