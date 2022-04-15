/*
 ============================================================================
 Name        : tp1_v1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "pedir_datos_bib.h"
#include "menu_libreria.h"
#include "calculos.h"
#define CANT_OPCIONES 6;




void mostrarOpcionesMenuPrincipal();

int main(void){
	setbuf(stdout, NULL);
//	int opcionesValidas = CANT_OPCIONES;
	int opcionElegida;
	int esRtaValida = -1;
	int deseaSalir = 0;
	const float valorBTPesos = 4606954.55;

	float precio = 100;
	float valorFinalCredito;
	float valorFinalDebito;

	valorFinalCredito = getPrecioTCred(precio);
	valorFinalDebito = getPrecioTDeb(precio);

	imprimirResultadoConValor("\nValor precio inicial: ", precio);
	imprimirResultadoConValor("\nValor precio final con tarjeta Crédito(+25)= $", valorFinalCredito);
	imprimirResultadoConValor("\nValor precio final con tarjeta Débito(-10)= $", valorFinalDebito);


	/*
	 *
   	 1. Ingresar Kilómetros: ( km=x)
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

	char *opcionesUno[] = {
			"1.	Ingresar Kilómetros: (km = x)\n"
	};

	char *opcionesDos[] = {
				"2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n",
				" - Precio vuelo Aerolíneas: \n",
				" - Precio vuelo Latam: \n"
		};
	char *opcionesTres[] = {
				"3. Calcular todos los costos: \n",
				"  a) Tarjeta de débito (descuento 10%) \n",
				"  b) Tarjeta de crédito (interés 25%) \n",
				"  c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)  \n",
				"  d) Mostrar precio por km (precio unitario) \n",
				"  e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas) \n",
		};
	char *opcionesResultados[] = {
					"  a) Tarjeta de débito (descuento 10%)",
					"  b) Tarjeta de crédito (interés 25%)",
					"  c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)",
					"  d) Mostrar precio por km (precio unitario)",
					"  e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)",
			};
	char *opcionesCuatro[] = {
				"4. Informar Resultados: \n"
		};
	mostrarOpciones(opcionesResultados,4);

//	do{
//		mostrarOpciones(opcionesTres,6);
//		esRtaValida = getInt("Ingrese una opcion: ", 3, 1, CANT_OPCIONES, "Opcion inválida, reingrese opcion: ", &opcionElegida);
//
//		printf("respuesta valida?: %d", esRtaValida);
//		if (esRtaValida){
//			deseaSalir = 1;
//		}
//	}while(!deseaSalir || !esRtaValida);



	return EXIT_SUCCESS;
}



