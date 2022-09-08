/*
 ============================================================================
 Name        : ejercicio3-4.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>

int numeroEntero(void);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	numero = numeroEntero();

	printf("el numero entero de 0 a 10 es : %d \n", numero);

	return EXIT_SUCCESS;
}

int numeroEntero(void) {

	int numero;

	printf("ingrese numero entero de 0 a 10");
	scanf("%d", &numero);
	while(numero < 0 || numero > 10){
		printf("error, reingrese numero entero");
		scanf("%d", &numero);
	}
	return numero;
}

