/*
 ============================================================================
 Name        : ejercicio1-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar dos números enteros, sumarlos y mostrar el resultado.
Ejemplo:
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int primerNumero;
	int segundoNumero;
	int resultado;
	char operadores;

	printf("ingrese primer numero :");
	fflush(stdin);
	scanf("%d", &primerNumero);

	printf("ingrese operadores (+/-): ");
	fflush(stdin);
	scanf("%c", &operadores);

	printf("ingrese segundo numero :");
	fflush(stdin);
	scanf("%d", &segundoNumero);

	switch(operadores){
	case '+' :
		resultado = primerNumero + segundoNumero;
		break;
	case '-' :
		resultado = primerNumero - segundoNumero;
		break;
	}

	printf("el resultado es %d", resultado);

	return EXIT_SUCCESS;
}
