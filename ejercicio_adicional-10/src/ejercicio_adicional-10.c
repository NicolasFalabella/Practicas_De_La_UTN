/*
 ============================================================================
 Name        : ejercicio_adicional-10.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 10. Escribir en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int contadorImpares;
//	char continuar = 's';

	contadorImpares = 0;

	for (int i = 0; i < 5; i++) {
		printf("ingrese numeros de 0 a 100: \n");
		scanf("%d", &numero);
		while (numero < 0 || numero > 100) {
			printf("error vuelva a ingresar numero dentro del rango");
			scanf("%d", &numero);
		}
		if (numero % 2 == 1) {
			contadorImpares++;
		}
		printf("los numeros impares son:%d\n", contadorImpares);

	}

	return EXIT_SUCCESS;
}
