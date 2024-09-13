/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
 int a;
 int b;
 int div;
 printf("digite o valor de a: \n");
 scanf("%d",&a);
 printf("digite o valor de b: \n");
 scanf("%d",&b);
 
 if(b != 0) {
 }else{
     printf("erro \n");
     return 1;
 }
     div = a / b;
     printf("%d dividido por %d é: %d \n", div);
     
 
 

    return 0;
}
