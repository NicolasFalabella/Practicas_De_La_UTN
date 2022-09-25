/*
 ============================================================================
 Name        : ejercicio5-3.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-3:
 Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
 La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
 Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
 (Según la recta numérica de los reales, hasta llegar a cero).
 Utilizar funciones y vectores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMAÑO_NUMERO 10

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumeros[TAMAÑO_NUMERO];
	int buffer;
	int contadorPositivos;
	int acumuladorPositivos;
	int promedioPositivos;

	contadorPositivos = 0;
	acumuladorPositivos = 0;

	for(int i; i < TAMAÑO_NUMERO; i++){
		printf("ingrese numeros distintos de 0");
		scanf("%d", &buffer);
		while(buffer == 0){
			printf("error, reingrese numeros distintos de 0");
			scanf("%d", &buffer);
		}
		arrayNumeros[i] = buffer;
		if(buffer > 0){
			contadorPositivos++;
			acumuladorPositivos += buffer;
		}
	}
	promedioPositivos = acumuladorPositivos / contadorPositivos;


	return EXIT_SUCCESS;
}
