/*
 * funciones.c
 *
 *  Created on: 9 sep. 2022
 *      Author: Fala
 */
#include <stdio.h>
#include <stdlib.h>

int validaciones(char temperatura) {

	printf("ingrese tipo de temperatura");
	fflush(stdin);
	scanf("%c", &temperatura);
	while (temperatura != 'f' && temperatura != 'c') {
		printf("error, ingrese tipo de temperatura");
		fflush(stdin);
		scanf("%c", &temperatura);
	}
	return temperatura;
}
int calculosCelsiusAFarenheit(int gradosTemperaturaC) {

	int calculoCelsiusAFaherenheit;

	calculoCelsiusAFaherenheit = (gradosTemperaturaC * 1.8) + 32;

	return calculoCelsiusAFaherenheit;
}

int calculosFahrenheitACelsius(int gradosTemperaturaF) {

	int calculoFaherenheitACelsius;

	calculoFaherenheitACelsius = (gradosTemperaturaF - 32) * 0.5556;

	return calculoFaherenheitACelsius;
}

int validacionesGradosC(int gradosTemperaturaC) {

	printf("ingrese grados de temperatura  ºC : ");
	scanf("%d", &gradosTemperaturaC);
	while (gradosTemperaturaC < 1 || gradosTemperaturaC > 100) {
		printf("error, reingrese grados de temperatura  ºC : ");
		scanf("%d", &gradosTemperaturaC);
	}

	return gradosTemperaturaC;
}

int validacionesGradosF(int gradosTemperaturaF) {

	printf("ingrese grados de temperatura ºF ");
	scanf("%d", &gradosTemperaturaF);
	while (gradosTemperaturaF < 32 || gradosTemperaturaF > 212) {
		printf("error, ingrese grados de temperatura ºF ");
		scanf("%d", &gradosTemperaturaF);
	}

	return gradosTemperaturaF;
}




