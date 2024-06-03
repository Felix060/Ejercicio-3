/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main() {
    const float Iva = 0.12; 
    const float Des = 0.05; 
    float P_U;
    float P_B;
    float P_I;
    float P_F;
    int Can;
    
    printf("Programa que permitira calcular el precio de un articulo anexando el IVA del 12 porciento, y si el total supera los 50,000 Bolívares, se descontara un 5 porciento.\n" );
    
    printf("coloque el precio del articulo: ");
    scanf("%f", &P_U);
    printf("Coloque la cantidad de articulos: ");
    scanf("%d", &Can);
    
    P_B = P_U * Can;
    
    P_I = P_B * (1 + Iva);

    if (P_I > 50000) {
        P_F = P_I * (1 - Des);
    } else {
        P_F = P_I;
    }
    
    printf("Precio Bruto: %.2f\n", P_B);
    printf("IVA (12%%): %.2f\n", P_B * Iva);
    printf("Precio con IVA: %.2f\n", P_I);
    if (P_I > 50000) {
        printf("Descuento (5%%): %.2f\n", P_I * Des);
    }
    printf("Precio final: %.2f\n", P_F);

    return 0;
}
   