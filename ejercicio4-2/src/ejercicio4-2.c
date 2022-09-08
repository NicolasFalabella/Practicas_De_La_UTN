/*
 ============================================================================
 Name        : ejercicio4-2.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 4-2:
 Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit ,
 validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
 Las validaciones se hacen en una biblioteca.
 Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
 */

//el punto d ebullicion en celsius es de 100ºC grados y el punto de congelacion es 0ºC
//el punto de congelacion de farenheit es de 32ºF y el punto de ebullicion es de 212ºF
#include <stdio.h>
#include <stdlib.h>
void validaciones(char temperatura);

int main(void) {
	setbuf(stdout, NULL);

	char temperatura;
	int gradosTemperaturaC;
	int gradosTemperaturaF;
	int calculoCelsiusAFaherenheit;
	int calculoFaherenheitACelsius;

	validaciones(temperatura);

	if (temperatura == 'c') {
		printf("ingrese grados de temperatura  ºC : ");
		scanf("%d", &gradosTemperaturaC);
		while (gradosTemperaturaC < 1 || gradosTemperaturaC > 100) {
			printf("error, reingrese grados de temperatura  ºC : ");
			scanf("%d", &gradosTemperaturaC);
		}
		calculoCelsiusAFaherenheit = (gradosTemperaturaC * 1.8) + 32;
		printf("la cuenta de celsius a farenheit es %d : ",
				calculoCelsiusAFaherenheit);
	}

	if (temperatura == 'f') {
		printf("ingrese grados de temperatura ºF ");
		scanf("%d", &gradosTemperaturaF);
		while (gradosTemperaturaF < 32 || gradosTemperaturaF > 212) {
			printf("error, ingrese grados de temperatura ºF ");
			scanf("%d", &gradosTemperaturaF);
		}
		calculoFaherenheitACelsius = (gradosTemperaturaF - 32) * 0.5556;
		printf("la cuenta de fahrenheit a celsius es %d : ",
				calculoFaherenheitACelsius);
	}

	return EXIT_SUCCESS;
}
void validaciones(char temperatura) {

	printf("ingrese tipo de temperatura");
	fflush(stdin);
	scanf("%c", &temperatura);
	while (temperatura != 'f' && temperatura != 'c') {
		printf("error, ingrese tipo de temperatura");
		fflush(stdin);
		scanf("%c", &temperatura);
	}

}

