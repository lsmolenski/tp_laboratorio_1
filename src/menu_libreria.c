/*
 * menu_libreria.c
 *
 *  Created on: 10 abr. 2022
 *      Author: lucas
 *
 *
 *
 *
 *      	1. Ingresar Kilómetros: ( km=x)
			 2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
				 - Precio vuelo Aerolíneas:
				 - Precio vuelo Latam:
			 3. Calcular todos los costos:
					 a) Tarjeta de débito (descuento 10%)
					 b) Tarjeta de crédito (interés 25%)
					 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
					 d) Mostrar precio por km (precio unitario)
					 e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
			 4. Informar Resultados
				 “Latam:
						 a) Precio con tarjeta de débito: r
						 b) Precio con tarjeta de crédito: r
						 c) Precio pagando con bitcoin : r
						 d) Precio unitario: r
				 Aerolíneas:
						 a) Precio con tarjeta de débito: r
						 b) Precio con tarjeta de crédito: r
						 c) Precio pagando con bitcoin : r
						 d) Precio unitario: r
				 La diferencia de precio es : r “
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

	//variable que se imprimirá al final
	char mensajeImprimir[] = "\t";

	//concateno el mensaje que quiero imprimir
	strcat(mensajeImprimir, mensaje);
	strcat(mensajeImprimir, "%f");

	printf(mensajeImprimir, valor);
}
