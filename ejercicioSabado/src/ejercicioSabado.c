/*
 ============================================================================
 Name        : ejercicioSabado.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 1.  Se ingresan 5 importes,
y pais de origen ('C' para China, 'U' para Uruguay o 'P' para Paraguay).
Calcular y mostrar:
a.  Mínimo importe con su pais
c.  Promedio importe
d.  Cantidad de productos de China (c)
e.  Sobre el mínimo encontrado aplicar un descuento del 10% a dicho importe.
*/
// falabella Nicolas;
// division E;

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int importe;
	int i;
	char pais;// "C' para China, 'U' para Uruguay o 'P' para Paraguay
	int banderaMinimoImporte;
	int minimoImporte;
	int promedioImporte;
	int acumuladorImporte;
	int contadorProductosChina;
	int precioDescuento;
	int paisMinimoImporte;

	banderaMinimoImporte = 1;
	acumuladorImporte = 0;
	contadorProductosChina = 0;


	for(i = 0; i < 5; i++){

		printf("ingrese el importe :");
		fflush(stdin);
		scanf("%d", &importe);

		do{
			printf("ingrese pais de origen C para China, U para Uruguay o P para Paraguay :");
			fflush(stdin);
			scanf("%c", &pais);
		}while(pais != 'c' && pais != 'u' && pais != 'p' );

		if(banderaMinimoImporte == 1){
			minimoImporte = importe;
			paisMinimoImporte = pais;
			banderaMinimoImporte = 0;
		}else{
			if(minimoImporte > importe){
				minimoImporte = importe;
				paisMinimoImporte = pais;
			}
		}

		if(pais == 'c'){
			contadorProductosChina++;
		}
		acumuladorImporte += importe;
	}

	promedioImporte = acumuladorImporte / i;

	precioDescuento = minimoImporte * 0.9;

	printf("el minimo importe es : %d y su pais de origen es : %c \n", minimoImporte, paisMinimoImporte);
	printf("el promedio del importe es : %d  \n", promedioImporte);
	printf("la cantidad de productos de china es : %d \n", contadorProductosChina);
	printf("el importe minimo con descuento es : %d \n", precioDescuento);

	return EXIT_SUCCESS;
}













