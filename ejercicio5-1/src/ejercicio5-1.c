/*
 ============================================================================
 Name        : ejercicio5-1.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumero[5];
	int acumuladorArrayNumero;
	int i;

	acumuladorArrayNumero = 0;

	for(i = 0; i < 5; i++){
		printf("ingrese numero : ");
		scanf("%d", &arrayNumero[i]);

		acumuladorArrayNumero += arrayNumero[i];
	}
	printf("la sumatoria de numeros es : %d \n", acumuladorArrayNumero);

	return EXIT_SUCCESS;
}
