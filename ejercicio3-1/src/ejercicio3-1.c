/*
 ============================================================================
 Name        : ejercicio3-1.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumero(float);

int main(void) {
	setbuf(stdout, NULL);

	float numeroFlotante;

	printf("ingrese numero flotante : \n");
	fflush(stdin);
	scanf("%f", &numeroFlotante);

	mostrarNumero(numeroFlotante);

	return EXIT_SUCCESS;
}

void mostrarNumero(float numeroFlotante){

	printf("el numero flotante es : %.2f \n", numeroFlotante);
}




