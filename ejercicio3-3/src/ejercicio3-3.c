/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que pida el ingreso de un entero y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroEntero(void);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	 numero = numeroEntero();

	 printf("el numero entero es : %d \n", numero);

	return EXIT_SUCCESS;
}

int numeroEntero(void){

	int numero;

	printf("ingrese numero entero");
	scanf("%d", &numero);

	return numero;
}
