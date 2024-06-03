/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num;
    
    printf("Programa para determinar si un numero que eligas sera par o impar.\n");

    printf("Coloca un numero entero: ");
    scanf("%d", &Num);
    
    if (Num % 2 == 0) {
        printf("El Número %d es Par.\n", Num);
    } else {
        printf("El Número %d es Impar.\n", Num);
    }
    return(0);
}