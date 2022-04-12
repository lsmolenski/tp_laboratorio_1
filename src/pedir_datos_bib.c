/*
 * libreria1.c
 *
 *  Created on: 5 abr. 2022
 *      Author: lucas
 */

#include "pedir_datos_bib.h"

void imprimir() {
	printf("Hola que tal perrito");
}

int pedirDatoNumerico(char mensaje[]) {
	int numeroIngresado;
	printf(mensaje);
	fflush(stdin);
	scanf("%d", &numeroIngresado);
	return numeroIngresado;

}


//VISTO EN CLASE
int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[],int *pNumeroIngresado){
	int retorno = -1;
	int auxiliarInt;
	int retornoScanf;


	//validar que todos los parametros recibidos sean algo razonable
	if(mensaje != NULL && reintentos > 0 && minimo < maximo && mensajeError != NULL && pNumeroIngresado != NULL ){

		printf("%s", mensaje);
		retornoScanf = scanf("%d", &auxiliarInt);		//devuelve 1 cuando TODO OK

		do{
			if (retornoScanf != 1 || auxiliarInt > maximo || auxiliarInt < minimo){
				printf("%s", mensajeError);
				retornoScanf = scanf("%d", &auxiliarInt);
				reintentos--;
			}else{
				reintentos = 0;
				*pNumeroIngresado = auxiliarInt;		//ASIGNACION DE VALOR A UNA VARIABLE DE TIPO PUNTERO
														//AL ESPACIO DE MEMORIA APUNTADO POR EL PUNTERO -QUE GUARDA UN INT-
														//ASIGNARLE EL VALOR DE auxiliarInt

				retorno = 0;
			}

		}while(reintentos > 0);


	}


	return retorno;
}


int getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[],float *pNumeroIngresado){
	int retorno = -1;
	float auxiliarFloat; //variable usada para manejar el dato que se va a ingresar, el mismo va a ser devuelto al final de la funcion como numero ingresado
	int retornoScanf;

	//validar que todos los parametros recibidos sean algo razonable
	if(mensaje != NULL && reintentos > 0 && minimo < maximo && mensajeError != NULL && pNumeroIngresado != NULL ){

		printf("%s", mensaje);
		retornoScanf = scanf("%f", &auxiliarFloat);		//devuelve 1 cuando TODO OK
		printf("dentro de la funcion el dato es: %f",auxiliarFloat);
		do{
			if (retornoScanf != 1 || auxiliarFloat > maximo || auxiliarFloat < minimo){
				printf("%s", mensajeError);
				retornoScanf = scanf("%f", &auxiliarFloat);
				reintentos--;
			}else{
				reintentos = 0;
				*pNumeroIngresado = auxiliarFloat;
				retorno = 0;
			}

		}while(reintentos > 0);


	}


	return retorno;
}
