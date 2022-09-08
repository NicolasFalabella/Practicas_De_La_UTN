/*
 ============================================================================
 Name        : ejercicio4-1.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 4-1:
 Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
 Utilizar la función PedirNumero de la ejercitación 3-4.

 Por ejemplo:
 5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int acumuladorFactorizados;
	//int factorizado;

	acumuladorFactorizados = 1;

	printf("ingrese numeros para factorizar : ");
	scanf("%d", &numero);

	for(int i = 0; i < numero; i++){
		acumuladorFactorizados *= i;
	}

	//factorizado = acumuladorFactorizados;

	printf("fdjasdfsdj %d ", acumuladorFactorizados);

	return EXIT_SUCCESS;
}


