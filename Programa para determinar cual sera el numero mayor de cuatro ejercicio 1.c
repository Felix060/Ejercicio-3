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
    int N1;
    int N2;
    int N3;
    int N4;
    int ma;

    printf("Programa para determinar cual sera el numero mayor de cuatro.\n");
    printf("Coloque el primer numero: ");
    scanf("%d", &N1);
    printf("Coloque el segundo numero: ");
    scanf("%d", &N2);
    printf("Coloque el tercer numero: ");
    scanf("%d", &N3);
    printf("Coloque el cuarto numero: ");
    scanf("%d", &N4);

    ma=N1;

    if (N2 > ma) {
        ma = N2;
    }
    if (N3 > ma) {
        ma = N3;
    }
    if (N4 > ma) {
        ma = N4;
    }

    printf("El numero mayor  de los que has ingresado es: %d\n", ma);
    
    return(0);
}