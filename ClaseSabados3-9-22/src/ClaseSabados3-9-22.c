/*
 ============================================================================
 Name        : ClaseSabados3-9-22.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1:
Crear una función que le solicite al usuario el ingreso de un numero y lo retorne.

Ejercicio 2:
Crear una función que reciba como parámetro dos números enteros,
que realice el promedio de los números y que retorne dicho valor.

Ejercicio 3:
Crear una función que reciba como parámetro un número entero.
La función retorna 1 en caso de que sea positivo, -1 en caso de que sea negativo y
0 en caso de que sea 0. Realizar la prueba lógica de la función en el main.

Ejercicio 4:
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar:
El promedio de los positivos
La cantidad de ceros
Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).

Nota:
Utilizar las funciones del punto anterior y desarrollar funciones
para resolver los procesos que están resaltados.
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototipo
// retornos, int, float, double, char, void, void*

//1)
//int pedirNumeroEntero(void);
//float pedirNumeroEntero(int numeroUno, int numeroDos);
//int numeroEntero(int numeroIngresado);

int main(void) {
	setbuf(stdout, NULL);

	//int numero;

	//numero = pedirNumeroEntero();

	//printf("el numero es %d : ", numero);

	/*int numeroUno = 0;
	int numeroDos = 0;
	float resultado = 0;

	resultado = pedirNumeroEntero(numeroUno, numeroDos);

	printf("el promedio es %f : ", resultado);*/

	//int retorno = 0;
	//int numeroIngresado = 0;
	int numeros;
	int contadorPositivos;
	int acumuladorPositivos;
	float promedio;
	int contadorCero;
	int banderaMinimoNegativo;
	int numeroMinimoNegativo;
	int acumuladorMinimoNegativos;

	banderaMinimoNegativo = 0;
	acumuladorPositivos = 0;
	contadorCero = 0;
	acumuladorMinimoNegativos = 0;
	contadorPositivos = 0;

	//printf("ingrese numero : ");
	//fflush(stdin);
	//scanf("%d", &numeroIngresado);

	//retorno = numeroEntero(numeroIngresado);
	//printf("el retorno es : %d", retorno);

	int i = 0;

	for(i = 0 ; i < 4; i++){
		printf("ingrese numeros : ");
		scanf("%d", &numeros);

		if(numeros > 0){
			contadorPositivos++;
			acumuladorPositivos += numeros;
		}
		if(numeros == 0){
			contadorCero++;
		}
		if(banderaMinimoNegativo == 0 && numeros < 0){
			numeroMinimoNegativo  = numeros;
			banderaMinimoNegativo = 1;
		}
		if(numeroMinimoNegativo > numeros){
			numeroMinimoNegativo  = numeros;
		}
	}

	printf("el minimo de los negativos  %d : \n", numeroMinimoNegativo);

	for(int a = numeroMinimoNegativo; a < 0; a++){
		acumuladorMinimoNegativos += numeroMinimoNegativo +1 ;
		numeroMinimoNegativo++;
	}

	promedio = (float)(acumuladorPositivos / contadorPositivos);

	printf("promedio %f \n", promedio);

	printf("la cantidad de ceros es %d : \n", contadorCero);

	printf("la suma de los antecesores %d : \n", acumuladorMinimoNegativos);

	return EXIT_SUCCESS;
}
//funcion
	/*int pedirNumeroEntero(void){

	int retornoNumero;

	printf("ingrese un numero : ");
	fflush(stdin);
	scanf("%d", &retornoNumero);

	return retornoNumero;
}*/
//2)
/*Ejercicio 2:
Crear una función que reciba como parámetro dos números enteros,
que realice el promedio de los números y que retorne dicho valor.*/

/*float pedirNumeroEntero(int numeroUno, int numeroDos){

	float promedio;

	 printf("ingreseNumeroUno : ");
	 fflush(stdin);
	 scanf("%d", &numeroUno);

	 printf("ingreseNumeroDos : ");
	 fflush(stdin);
	 scanf("%d", &numeroDos);

	 promedio = (numeroUno + numeroDos) / 2;

	 return promedio;
}*/

//3)
/*
Crear una función que reciba como parámetro un número entero.
La función retorna 1 en caso de que sea positivo, -1 en caso de que sea negativo y
0 en caso de que sea 0. Realizar la prueba lógica de la función en el main.*/

/*int numeroEntero(int numeroIngresado){

	int retorno;

	if(numeroIngresado > 0){
		retorno = 1;
	}else{
		if(numeroIngresado < 0){
			retorno = -1;
		}else{
			if(numeroIngresado == 0){
				retorno = 0;
			}
		}
	}

	return retorno;
}*/

































