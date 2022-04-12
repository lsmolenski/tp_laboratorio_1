/*
 * menu_libreria.c
 *
 *  Created on: 10 abr. 2022
 *      Author: lucas
 *
 *
 *
 *
 *      	1. Ingresar Kil�metros: ( km=x)
			 2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
				 - Precio vuelo Aerol�neas:
				 - Precio vuelo Latam:
			 3. Calcular todos los costos:
					 a) Tarjeta de d�bito (descuento 10%)
					 b) Tarjeta de cr�dito (inter�s 25%)
					 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
					 d) Mostrar precio por km (precio unitario)
					 e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
			 4. Informar Resultados
				 �Latam:
						 a) Precio con tarjeta de d�bito: r
						 b) Precio con tarjeta de cr�dito: r
						 c) Precio pagando con bitcoin : r
						 d) Precio unitario: r
				 Aerol�neas:
						 a) Precio con tarjeta de d�bito: r
						 b) Precio con tarjeta de cr�dito: r
						 c) Precio pagando con bitcoin : r
						 d) Precio unitario: r
				 La diferencia de precio es : r �
			 5. Carga forzada de datos
			 6. Salir
 */

#include "menu_libreria.h"

void mostrarOpciones(char *opciones[], int cantOpciones) {

	int i = 0;
	for (i; i < cantOpciones; i++) {

		printf("(%d)-\t", i+1);
		printf(opciones[i]);
	}

}

void imprimirResultadoConValor(char mensaje[], float valor) {

	//variable que se imprimir� al final
	char mensajeImprimir[] = "\t";

	//concateno el mensaje que quiero imprimir
	strcat(mensajeImprimir, mensaje);
	strcat(mensajeImprimir, "%f");

	printf(mensajeImprimir, valor);
}
