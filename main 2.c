/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a, b;
  printf("primeiro valor inteiro: \n");
  scanf("%d",&a);
  printf("segundo valor inteiro: \n");
  scanf("%d",&b);
  if(a > b) {
  printf("%d é maior que %d \n", a, b);
  }else{
      printf("%d é menor que %d \n", a, b);
  }

    return 0;
}
