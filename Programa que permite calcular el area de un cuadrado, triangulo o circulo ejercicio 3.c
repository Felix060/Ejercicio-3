/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
    int opcion;
    float lado, base, altura, radio;
    printf("Programa que permite calcular el area de un cuadrado, triangulo o circulo, segun la opcion que sea de su preferencia.\n");
    printf("Seleccione la figura para calcular el Area:\n");
    printf("1. Cuadrado\n2. Triangulo\n3. Circulo\n");
    scanf("%d", &opcion);
    

    if (opcion == 1) {
        printf("Ingrese la longitud del lado del cuadrado: ");
        scanf("%f", &lado);
        printf("El area del cuadrado es: %f", lado * lado);
    } else if (opcion == 2) {
        printf("Ingrese la base del triangulo: ");
        scanf("%f", &base);
        printf("Ingrese la altura del triangulo: ");
        scanf("%f", &altura);
        printf("El area del triángulo es: %f", (base * altura) / 2);
    } else if (opcion == 3) {
        printf("Ingrese el radio del circulo: ");
        scanf("%f", &radio);
        printf("El area del circulo es: %f", 3.1416 * radio * radio);
    } else {
        printf("Opcion no valida");
    }

    return 0;
}