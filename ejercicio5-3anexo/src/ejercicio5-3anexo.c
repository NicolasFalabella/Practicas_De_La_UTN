/*
 ============================================================================
 Name        : ejercicio5-3anexo.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 ANEXO 5-3:
 Crear un Array de 5 elementos de tipo numérico donde se cargarán edades.
 Agregar la funcionalidad para la opción 1 del Menú del ejercicio anterior utilizando funciones,
 es decir una función que inicialice el Array.
 Agregar la funcionalidad para la opción 2 del Menú utilizando funciones,
 es decir una función que le pida los números o edades al usuario para cargar el Array de forma secuencial.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARRAY 5
int main(void) {

	int arrayEdades[5];

	for(int i = 0; i < ARRAY; i++){
		printf("ingrese edades");
		scanf("%d", arrayEdades[i]);



	}
	return EXIT_SUCCESS;
}
