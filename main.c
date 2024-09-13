/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float preco;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

   
    if (preco <= 0) {
        printf("preco invalido \n", preco);
        }else if(preco <= 30) {
            printf("preco baixo \n", preco);
        }else if(preco <= 50) {
            printf("preco medio \n", preco);
        }else if(preco >= 50 ) {
            printf("preco alto \n", preco);
        }
        
        return 0; 
        }
        
            
        
   
