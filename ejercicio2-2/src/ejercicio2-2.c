/*
 ============================================================================
 Name        : ejercicio2-2.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-2:

 Ingresar 10 números enteros, distintos de cero. Mostrar:
 A. Cantidad de pares e impares.
 B. El menor número ingresado.
 C. De los pares el mayor número ingresado.
 D. Suma de los positivos.
 E. MULTIPLICACION de los negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeros;
	int contadorNumerosPares;
	int contadorNumerosImpares;
	int banderaNumeroMasChico;
	int numeroMasChico;
	int banderaParesMayoresIngresados;
	int paresMayores;
	int acumuladorNumerosPositivos;
	int acumuladorNumerosNegativos;

	contadorNumerosPares = 0;
	contadorNumerosImpares = 0;
	banderaNumeroMasChico = 0;
	banderaParesMayoresIngresados = 0;
	acumuladorNumerosPositivos = 0;
	acumuladorNumerosNegativos = 1;

	for (int i = 0; i < 5; i++) {

		printf("ingrese numeros : \n ");
		scanf("%d", &numeros);
		while (numeros == 0) {
			printf("error, ingrese numero nuevamente [distinto de 0]");
			scanf("%d", &numeros);
		}

		if (numeros % 2 == 0) {
			contadorNumerosPares++;

			if (banderaParesMayoresIngresados == 0) {
				paresMayores = numeros;
				banderaParesMayoresIngresados = 1;
			} else {
				if (paresMayores < numeros) {
					paresMayores = numeros;
				}
			}

		} else {
			contadorNumerosImpares++;
		}
		if (banderaNumeroMasChico == 0) {
			numeroMasChico = numeros;
			banderaNumeroMasChico = 1;
		} else {
			if (numeroMasChico > numeros) {
				numeroMasChico = numeros;
			}
		}

		if (numeros > 0) {
			acumuladorNumerosPositivos += numeros;
		}

		if (numeros < 0) {
			acumuladorNumerosNegativos *= numeros;
		}

	}

	printf("la cantidad de pares %d : \n ", contadorNumerosPares);

	printf("la cantidad de impares %d : \n ", contadorNumerosImpares);

	printf("el menor numero ingresado %d : \n ", numeroMasChico);

	printf("el mayor numero par %d : \n ", paresMayores);

	printf("la suma de los positivos %d : \n ", acumuladorNumerosPositivos);

	printf("la multiplicacion de los negativos %d : \n", acumuladorNumerosNegativos);

	return EXIT_SUCCESS;
}
/*
 A. Cantidad de pares e impares.
 B. El menor número ingresado.
 C. De los pares el mayor número ingresado.
 D. Suma de los positivos.
 E. MULTIPLICACION de los negativos.*/
