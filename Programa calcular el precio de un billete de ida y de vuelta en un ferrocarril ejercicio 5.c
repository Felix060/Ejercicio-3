/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {
    float distancia, preciototal;
    int dias;
     printf("Programa calcular el precio de un billete de ida y de vuelta en un ferrocarril bajo las condiciones de que si el numero de dias de estancia es superior a 7 y la distancia es superior a 800 km; el billete tendra un descuento del 70 porciento.\n");
    printf("Ingrese la distancia a recorrer en kilometros: ");
    scanf("%f", &distancia);

    printf("Ingrese el numero de días de estancia: ");
    scanf("%d", &dias);
    

    if (dias > 7 && distancia > 800) {
        preciototal= distancia*2.5*0.30;
    }else{
    	preciototal= distancia*2.5;
    	
	}
	printf("el total a pagar es de:%.2f Bs",preciototal);

    return 0;

}