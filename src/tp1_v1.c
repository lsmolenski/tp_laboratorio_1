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
	imprimirResultadoConValor("\nValor precio final con tarjeta Cr�dito(+25)= $", valorFinalCredito);
	imprimirResultadoConValor("\nValor precio final con tarjeta D�bito(-10)= $", valorFinalDebito);


	/*
	 *
   	 1. Ingresar Kil�metros: ( km=x)
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

	char *opcionesUno[] = {
			"1.	Ingresar Kil�metros: (km = x)\n"
	};

	char *opcionesDos[] = {
				"2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)\n",
				" - Precio vuelo Aerol�neas: \n",
				" - Precio vuelo Latam: \n"
		};
	char *opcionesTres[] = {
				"3. Calcular todos los costos: \n",
				"  a) Tarjeta de d�bito (descuento 10%) \n",
				"  b) Tarjeta de cr�dito (inter�s 25%) \n",
				"  c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)  \n",
				"  d) Mostrar precio por km (precio unitario) \n",
				"  e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas) \n",
		};
	char *opcionesResultados[] = {
					"  a) Tarjeta de d�bito (descuento 10%)",
					"  b) Tarjeta de cr�dito (inter�s 25%)",
					"  c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)",
					"  d) Mostrar precio por km (precio unitario)",
					"  e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)",
			};
	char *opcionesCuatro[] = {
				"4. Informar Resultados: \n"
		};
	mostrarOpciones(opcionesResultados,4);

//	do{
//		mostrarOpciones(opcionesTres,6);
//		esRtaValida = getInt("Ingrese una opcion: ", 3, 1, CANT_OPCIONES, "Opcion inv�lida, reingrese opcion: ", &opcionElegida);
//
//		printf("respuesta valida?: %d", esRtaValida);
//		if (esRtaValida){
//			deseaSalir = 1;
//		}
//	}while(!deseaSalir || !esRtaValida);



	return EXIT_SUCCESS;
}



