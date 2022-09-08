/*
 ============================================================================
 Name        : ejercicio3-2.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y 0 en caso contrario.
 Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroParImpar(void);

int main(void) {
	setbuf(stdout, NULL);

	int numeros;

	numeros = numeroParImpar();

	printf("el numero es : %d \n", numeros);

	return EXIT_SUCCESS;
}

int numeroParImpar(void){

	int numero;
	int retornoNumero;

	printf("ingrese numero par o impar :");
		fflush(stdin);
		scanf("%d", &numero);
		if(numero % 2 == 0){
			retornoNumero = 1;
		}else{
			retornoNumero = 0;
		}

		return retornoNumero;
}










