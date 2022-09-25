/*
 ============================================================================
 Name        : ejercicioa_adicional_3.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 3. Escribir un programa que realice las siguientes acciones
  Limpie la pantalla
  Asigne a 2 variables numero1 y numero2 valores distintos de cero
  Efectúe el producto de dichas variables
  Muestre el resultado pos pantalla
  Obtenga el cuadrado de numero1 y lo muestre par pantalla
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero1 = 10;
	int numero2 = 20;
	int productoNumeros;
	int cuadradoNumero1;

	productoNumeros = numero1 * numero2;

	cuadradoNumero1 = numero1 * numero1;

	system("cls");

	printf("el numero 1 es: %d\n", numero1);
	printf("el numero 2 es: %d\n", numero2);
	printf("el producto de los numeros es: %d \n", productoNumeros);
	printf("el cuadro del numero 1 es: %d \n", cuadradoNumero1);

	return EXIT_SUCCESS;
}
