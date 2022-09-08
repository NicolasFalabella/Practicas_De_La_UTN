/*
 ============================================================================
 Name        : ejercicio_ejemplo_arrays7-9-22.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define numerito 5

int inicializarArray(int array[], int len);
int imprimirArray(int array[], int len);
int cargaAleatoriaArray(int array[],int len, int valor, int index);

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumero[numerito];
	//int numerito2[30];

	inicializarArray(arrayNumero, 5);

	imprimirArray(arrayNumero, 5);

	return EXIT_SUCCESS;
}
int inicializarArray(int array[], int len) {

	if (array != NULL) {

		int i;

		for (i = 0; i < len; i++) {
			array[i] = 4;
		}
	}

	return 0;
}
int imprimirArray(int array[], int len) {

	if(array != NULL){

	int i;

	for (i = 0; i < 5; i++) {

		printf("el valor es : %d \n ", array[i]);

	}
	}

	return 0;
}
int cargaAleatoriaArray(int array[],int len, int valor, int index) {
	if(array != NULL && len > 0 && index < len){
	array[index] = valor;


	}
	return 0;
}












