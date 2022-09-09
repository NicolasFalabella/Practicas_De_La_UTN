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
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	char temperatura;
	char temperatura2;
	int gradosTemperaturaC;
	int gradosTemperaturaC2;
	int gradosTemperaturaF;
	int gradosTemperaturaF2;
//	int calculoCelsiusAFaherenheit;
	int temperaturaValidadaC;
	//int calculoFaherenheitACelsius;
	int temperaturaValidadaF;

	temperatura2 = validaciones(temperatura);

	if(temperatura2 == 'c'){
		temperaturaValidadaC = validacionesGradosC(gradosTemperaturaC);
		gradosTemperaturaC2 = calculosCelsiusAFarenheit(temperaturaValidadaC);
		printf("la cuenta de celsius a farenheit es %d : ", gradosTemperaturaC2);
	}else{
		temperaturaValidadaF = validacionesGradosF(gradosTemperaturaF);
		gradosTemperaturaF2 = calculosFahrenheitACelsius(temperaturaValidadaF);
		printf("la cuenta de fahrenheit a celsius es %d : ", gradosTemperaturaF2);
	}


	return EXIT_SUCCESS;
}
