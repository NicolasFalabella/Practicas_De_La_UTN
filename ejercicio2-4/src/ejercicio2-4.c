/*
 ============================================================================
 Name        : ejercicio2-4.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
  Ejercicio 2-4:
 Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char letras;
	int contadorLetras;

	contadorLetras = 0;

	for(int i = 0; i < 5; i++){

		printf("ingrese letras minusculas");
		fflush(stdin);
		scanf("%c", &letras);

		if(letras == 'p'){
			contadorLetras++;
		}
	}

	printf("la cantidad de letras p que se ingresaron son: %d \n", contadorLetras);

	return EXIT_SUCCESS;
}
