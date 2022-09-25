/*
 ============================================================================
 Name        : clase0-4sabados.c
 Author      : falabella
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 REPASO DE ARRAY DE STING CLASE 0-4 SABADOS.
 ============================================================================
 /********************************************************************************
string.h
size_t strlen(const char *str)
char* strcpy(char *dest, const char *src)
char* strncpy(char *dest, const char *src, size_t n)
char* strcat(char *dest, const char *src)
char* strncat(char *dest, const char *src, size_t n)
int strcmp(const char *str1, const char *str2)
int strncmp(const char *str1, const char *str2, size_t n)

ctype.h
int toupper(int c)
int tolower(int c)

ASCII: https://elcodigoascii.com.ar/
int sizeof(...);
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM_CADENA 20

int main(void) {
	setbuf(stdout, NULL);
/*
int strcmp(const char *str1, const char *str2)
int strncmp(const char *str1, const char *str2, size_t n)
 */
	/*
	 *si el valor de retorno 	< 0, indica que str1 es menor que str2.
	 *si si el valor de retorno > 0, indica que str2 es menor que str1.
	 *si si el valor de retorno = 0, indica que str1 es igual a str2.
	 */

	int rtn;
	rtn = strcmp("Cruz", "Cruz"); //iguales 0
	rtn = strcmp("1", "55555"); //si cad2 es mas grande que cad1, entonces me retorna un -1
	rtn = strcmp("55555", "1"); //si cad2 es menor que cad1, entonces me retorna un 1

	rtn = strcmp("Hola", "hola");
	rtn = strncmp("HOLA", "HOla", 3);


	printf("%d", rtn);

	return 0;
}

nombre[20];

//Get_String("Dame tu nombre", "Error, eso no es un nombre", nombre, 20);

/*******************************************************************************
 * CREAR FUNCIONES
 * 1) Que convierta una cadena a MAYUSCULA (Replicar toupper())
 * 2) Que convierta una cadena a MINUSCULA (Replicar tolower())
 * 3) Que copie un LITERAL a una CADENA validando tamaño del literal
 * int copiarCadena(char* cadena, const char* str, int size)
 * 4) Que VALIDE si todos sus caracteres son ALFABETICOS
 * 5) Que PIDA y GUARDE un LITERAL en una CADENA con el siguiente head:
 * int Get_String(char* MSJ, char* ERROR_MSJ, char* pString, int TAM);
 ******************************************************************************/




