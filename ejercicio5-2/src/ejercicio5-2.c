/*
 ============================================================================
 Name        : ejercicio5-2.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-2:
 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
 Cantidad de positivos y negativos.
 Sumatoria de los pares.
 El mayor de los impares.
 Listado de los números ingresados.
 Listado de los números pares.
 Listado de los números de las posiciones impares.
 Anexo 5-2
 Los números que se repiten
 Los positivos creciente y los negativos de manera decreciente
 Se deberán utilizar funciones y vectores.
 ============================================================================
 numero %2
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM_VECTOR 10

int contadorDePositivos(int buffer, int contadorPositivos, int arrayNumero[]);
int contadorDeNegativos(int buffer, int contadorNegativos, int arrayNumero[]);
int sumatoriaPares(int buffer, int acumuladorPares, int arrayNumero[]);
int elMayorDeLosImpares(int banderaMayorImpares, int mayorImpares, int buffer,
		int arrayNumero[]);
void validaciones(int buffer, int arrayNumero[]);
void listadoNumeros(int arrayNumero[]);
void listadoNumerosPares(int arrayNumero[]);
void listadoNumPosicionImpar(int arrayNumero[]);

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumero[TAM_VECTOR];
	int buffer;

	int contadorPositivos;
	int contadorNegativos;

	int acumuladorPares;
	int banderaMayorImpares;
	int mayorImpares;

	contadorPositivos = 0;
	contadorNegativos = 0;

	acumuladorPares = 0;
	banderaMayorImpares = 0;

	validaciones(buffer, arrayNumero);

	contadorPositivos = contadorDePositivos(buffer, contadorPositivos,
			arrayNumero);

	contadorNegativos = contadorDeNegativos(buffer, contadorNegativos,
			arrayNumero);

	acumuladorPares = sumatoriaPares(buffer, acumuladorPares, arrayNumero);

	mayorImpares = elMayorDeLosImpares(banderaMayorImpares, mayorImpares,
			buffer, arrayNumero);

	listadoNumeros(arrayNumero);

	listadoNumerosPares(arrayNumero);

	listadoNumPosicionImpar(arrayNumero);

	for (int i = 0; i < TAM_VECTOR; i++) {
		printf("ingrese numeros: ");
		scanf("%d", &buffer);
		while (buffer < -1000 || buffer > 1000) {
			printf("ingrese numeros: ");
			scanf("%d", &buffer);
		}
		arrayNumero[i] = buffer;

		if (buffer > -1) {
			contadorPositivos++;
		} else {
			contadorNegativos++;
		}

		if (buffer % 2 == 0) {
			acumuladorPares += buffer;
		} else {
			if (banderaMayorImpares == 0) {
				mayorImpares = buffer;
				banderaMayorImpares = 1;
			} else {
				if (mayorImpares < buffer) {
					mayorImpares = buffer;
				}
			}
		}
	}
	puts("listado de numeros ingresados");
	for (int i = 0; i < TAM_VECTOR; i++) {
		printf("numero %d %d \n", i + 1, arrayNumero[i]);
	}

	puts("listado de numeros pares ingresados");
	int auxContador = 0;
	for (int i = 0; i < TAM_VECTOR; i++) {
		if (arrayNumero[i] % 2 == 0) {
			auxContador++;
			printf("numero %d %d \n", auxContador, arrayNumero[i]);
		}
	}

	puts("listado de numeros de posicion impar");
	for (int i = 0; i < TAM_VECTOR; i++) {
		if (arrayNumero[i] % 2 != 0) {
			printf("posicion %d : %d\n", i, arrayNumero[i]);
		}
	}

	printf("la cantidad de los positvos: %d\n", contadorPositivos);
	printf("la cantidad de los negativos: %d\n", contadorNegativos);
	printf("la sumatoria de los pares: %d\n", acumuladorPares);

	return EXIT_SUCCESS;
}

int contadorDePositivos(int buffer, int contadorPositivos, int arrayNumero[]) {

	int i;

	for (i = 0; i < TAM_VECTOR; i++) {

		arrayNumero[i] = buffer;

		if (buffer > -1) {
			contadorPositivos++;
		}
	}
	return contadorPositivos;
}
int contadorDeNegativos(int buffer, int contadorNegativos, int arrayNumero[]) {

	int i;

	for (i = 0; i < TAM_VECTOR; i++) {

		arrayNumero[i] = buffer;

		if (buffer > -1) {
			contadorNegativos++;
		}
	}

	return contadorNegativos;
}
int sumatoriaPares(int buffer, int acumuladorPares, int arrayNumero[]) {

	int i;

	arrayNumero[i] = buffer;

	for (i = 0; i < TAM_VECTOR; i++) {

		if (buffer % 2 == 0) {
			acumuladorPares += buffer;
		}
	}

	return acumuladorPares;
}

int elMayorDeLosImpares(int banderaMayorImpares, int mayorImpares, int buffer,
		int arrayNumero[]) {

	int i;

	arrayNumero[i] = buffer;

	for (i = 0; i < TAM_VECTOR; i++) {
		if (buffer % 2 != 0) {
			if (banderaMayorImpares == 0) {
				mayorImpares = buffer;
				banderaMayorImpares = 1;
			} else {
				if (mayorImpares < buffer) {
					mayorImpares = buffer;
				}
			}
		}
	}

	return mayorImpares;
}
void validaciones(int buffer, int arrayNumero[]) {

	int i;

	arrayNumero[i] = buffer;

	for (int i = 0; i < TAM_VECTOR; i++) {
		printf("ingrese numeros: ");
		scanf("%d", &buffer);
		while (buffer < -1000 || buffer > 1000) {
			printf("ingrese numeros: ");
			scanf("%d", &buffer);
		}
	}

}
void listadoNumeros(int arrayNumero[]) {

	puts("listado de numeros ingresados");
	for (int i = 0; i < TAM_VECTOR; i++) {
		printf("numero %d %d \n", i + 1, arrayNumero[i]);
	}

}
void listadoNumerosPares(int arrayNumero[]) {

	puts("listado de numeros pares ingresados");
	int auxContador = 0;
	for (int i = 0; i < TAM_VECTOR; i++) {
		if (arrayNumero[i] % 2 == 0) {
			auxContador++;
			printf("numero %d %d \n", auxContador, arrayNumero[i]);
		}
	}
}
void listadoNumPosicionImpar(int arrayNumero[]) {

	puts("listado de numeros de posicion impar");
	for (int i = 0; i < TAM_VECTOR; i++) {
		if (arrayNumero[i] % 2 != 0) {
			printf("posicion %d : %d\n", i, arrayNumero[i]);
		}
	}
}

