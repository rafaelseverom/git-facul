/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int inteiro;
printf("digite um valor inteiro: \n");
scanf("%d", &inteiro);
if( inteiro % 2 == 0){
printf("esse numero é par \n",inteiro);
}else{
    printf("esse nuemro é impar \n", inteiro);
}


    return 0;
}