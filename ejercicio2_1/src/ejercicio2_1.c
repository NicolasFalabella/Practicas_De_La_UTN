/*
 ============================================================================
 Name        : ejercicio2_1.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

  Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 - 1 - 2
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeros;
	float promedio;
	int acumuladorNumeros;
	int contadorNumeros;

	acumuladorNumeros = 0;
	contadorNumeros = 0;

	for(int i = 0; i < 5; i++){
		printf("ingresar numeros : ");
		scanf("%d", &numeros);

		acumuladorNumeros +=  numeros;
		contadorNumeros++;
	}

	promedio = acumuladorNumeros / contadorNumeros;

	printf("el promedio de los numeros enteros : %.2f \n", promedio);

	return EXIT_SUCCESS;
}
