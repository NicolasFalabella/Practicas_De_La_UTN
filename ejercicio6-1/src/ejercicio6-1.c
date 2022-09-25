/*
 ============================================================================
 Name        : ejercicio6-1.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 6-1:
 Disponemos de dos variables numéricas (a y b).
 Realizar un algoritmo que permita el intercambio de valores de dichas variables.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ordenamientoNumeros(int *array, int len);
int imprimirArray(int* array, int len);

int main(void) {
	fflush(stdin);

	int numeros [2] = {44,12};

	printf("antes del ordenamiento:\n");
	imprimirArray(numeros,2);

	ordenamientoNumeros(numeros,2);

	printf("despues del ordenamiento:\n");
	imprimirArray(numeros,2);

	return EXIT_SUCCESS;
}

int ordenamientoNumeros(int *array, int len) {

	int banderaOrdenamiento;
	int i;
	int retorno = -1;
	int buffer;

	if (array != NULL && len > 0) {
		do {
			banderaOrdenamiento = 0;
			for (i = 0; i < len - 1; i++) {
				if (array[i] > array[i + 1]) {
					banderaOrdenamiento = 1;
					buffer = array[i];
					array[i] = array[i + 1];
					array[i + 1] = buffer;

				}
			}
		} while (banderaOrdenamiento);
	}
	retorno = 0;
	return retorno;
}

int imprimirArray(int* array, int len){
	for(int i = 0; i < len; i++){
		printf("%d \n", array[i]);
	}
	return 0;
}

