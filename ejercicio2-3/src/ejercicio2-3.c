/*
 ============================================================================
 Name        : ejercicio2-3.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-3:
 Debemos alquilar el servicio de transporte para llegar a
 Mar del Plata con un grupo de personas (no más de 100), de cada persona debemos obtener los siguientes datos:
 número de cliente,estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17), temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que
 solo mostramos si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	//int numeroCliente;
	char estadoCivil;
	int temperaturaCorporal;
	char sexo;
	int edad;
	int contadorNumeroCliente;
	int banderaMujerSolteraMasJoven;
	int mujerMasJoven;
	int contadorPersonasViudasMayorA60;
	int viajeSinDescuento;
	int descuentoParaLosViejos;
	int contadorMayorA60;
	int resultadoDelDescuentoParaLosViejos;

	contadorNumeroCliente = 0;
	banderaMujerSolteraMasJoven = 0;
	contadorPersonasViudasMayorA60 = 0;
	contadorMayorA60 = 0 ;

	for(int i = 0; i < 5; i++){

		contadorNumeroCliente++;

		printf("ingrese estado civil del cliente");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v'){
			printf("error, estado civil del cliente [s]-[c]-[v]");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}

		printf("ingrese temperatura del cliente");
		scanf("%d", &temperaturaCorporal);
		while(temperaturaCorporal < 35 || temperaturaCorporal > 40){
			printf("error, reingrese temperatura corporal [no puede ser menor a 35 ni mayor a 40]");
			scanf("%d", &temperaturaCorporal);
		}

		printf("ingrese edad del cliente");
		scanf("%d", &edad);
		while(edad < 18){
			printf("error, no es mayor de edad [18 para arriba]");
			scanf("%d", &edad);
		}

		printf("ingrese sexo del cliente");
		fflush(stdin);
		scanf("%c", &sexo);
		while(sexo != 'f' && sexo != 'm' && sexo != 'o'){
			printf("error, reingrese sexo del cliente [f]-[m]-[o]");
			fflush(stdin);
			scanf("%c", &sexo);
		}

		if(banderaMujerSolteraMasJoven == 0 && sexo == 'f' && estadoCivil == 's'){
			mujerMasJoven = edad;
			banderaMujerSolteraMasJoven = 1;
		}
		if(mujerMasJoven > edad && sexo == 'f' && estadoCivil == 's'){
			mujerMasJoven = edad;
		}

		if(estadoCivil == 'v' && edad > 60){
			contadorPersonasViudasMayorA60++;
		}

		if(edad > 60){
			contadorMayorA60++;
		}
	}

	viajeSinDescuento = contadorNumeroCliente * 600;

	if(contadorMayorA60 > contadorNumeroCliente / 2){
				descuentoParaLosViejos = (viajeSinDescuento * 25) / 100;
			}

	resultadoDelDescuentoParaLosViejos = viajeSinDescuento - descuentoParaLosViejos;

	printf("el numero de cliente es : %d \n", contadorNumeroCliente);
	printf("la edad de la mujer soltera mas joven : %d \n", mujerMasJoven);
	printf("la cantidad de personas viudas mayores a 60 : %d \n", contadorPersonasViudasMayorA60);
	printf("el valor de viaje sin descuento es :  %d \n ", viajeSinDescuento);
	printf("el descuento del 25 para las personas de 60 que si es que son mayoria es de $ : %d \n",
			resultadoDelDescuentoParaLosViejos);//descuentoParaLosViejos

	return EXIT_SUCCESS;
}











