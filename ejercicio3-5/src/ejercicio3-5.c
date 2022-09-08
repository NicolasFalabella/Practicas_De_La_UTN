/*
 ============================================================================
 Name        : ejercicio3-5.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-5:
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
 int Sumar1(int, int);
 int Sumar2(void);
 void Sumar3(int, int);
 void Sumar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumaNumero1(int numero1, int numero2);
int sumaNumero2(void);
void sumaNumero3(int numero5, int numero6);
void sumaNumero4(void);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int primerSuma;
	int segundaSuma;

	printf("ingresar numero 1 : ");
	scanf("%d", &numero1);

	printf("ingresar numero 2 : ");
	scanf("%d", &numero2);

	primerSuma = sumaNumero1(numero1,numero2);
	printf("la suma del 1 es : %d \n ", primerSuma);

	segundaSuma = sumaNumero2();
	printf("la suma del 2 es : %d \n", segundaSuma);

	sumaNumero3(numero1, numero2);
	//printf("la suma del 3 es : %d \n", terceraSuma);

	sumaNumero4();
	//printf("la suma del 4 es : %d \n", cuartaSuma);

	return EXIT_SUCCESS;
}

int sumaNumero1(int numero1, int numero2){

	int suma;

	suma  = numero1 + numero2;

	return suma;
}

int sumaNumero2(void){

	int numero3;
	int numero4;
	int suma;

	printf("ingresar numero 3 :");
	scanf("%d", &numero3);

	printf("ingresar numero 4 :");
	scanf("%d", &numero4);


	suma = numero3 + numero4;

	return suma;
}

void sumaNumero3(int numero5, int numero6){

	int suma;

	printf("ingrese numero 5 : ");
	scanf("%d", &numero5);

	printf("ingrese numero 6 : ");
	scanf("%d", &numero6);

	suma = numero6 + numero6;

	printf("la suma del 3 es : %d \n", suma);
}

void sumaNumero4(void){

	int numero7;
	int numero8;
	int suma;

	printf("ingrese numero 7 :");
	scanf("%d", &numero7);

	printf("ingrese numero 8 :");
	scanf("%d", &numero8);

	suma = numero7 + numero8;

	printf("la suma del 4 es : %d \n", suma);

}
















