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

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "menu_libreria.h"
#include "pedir_datos_bib.h"
#include "calculos.h"
#define CANT_OPCIONES 6
#define BTCOIN  4606954.55

void MenuPrincipal() {
	setbuf(stdout, NULL);
//	system("cls");


//	int opcionesValidas = CANT_OPCIONES;
	int opcionElegida;
	int esRtaValida = 0;
	int deseaSalir = 0;

	int auxIngresoKmValido = 0;
	int auxIngresadoY,auxIngresadoZ =0;

	float precio = 100;
	float valorFinalCredito;
	float valorFinalDebito;

	const float valorBTPesos = 4606954.55;
	const float kmForzado = 7090;
	const float precioAerolineasForzado = 162965;
	const float precioLatamForzado = 159339;

	int valoresCompletos = 0;
	int valoresXCompleto =0;
	int valoresYCompleto =0;
	int valoresZCompleto =0;

	float x,y,z = 0;
	float *cantKMIngresados;


//	imprimirResultadoConValor("\nValor precio inicial: ", precio);
//	imprimirResultadoConValor("\nValor precio final con tarjeta Crédito(+25)= $", valorFinalCredito);
//	imprimirResultadoConValor("\nValor precio final con tarjeta Débito(-10)= $", valorFinalDebito);

	char *cadenaUno;
	char aerolineaElegida;
//	esRtaValida = getChar("Ingrese opcion deseada: \n", 10, "Reingrese una opción valida: ", cadenaUno);

//	valorFinalCredito = getPrecioTCred(precio);
//	valorFinalDebito = getPrecioTDeb(precio);

	float resultadosY[3]={0};
	float resultadosZ[3]={0};


	char *opcionesMenuUnoIngresoKM[] = { "1. Ingresar Kilómetros: (km = x)" };
	int cantOpcionesMenuUno=1;

	char *opcionesIngresoPrecioVuelos[] = {
			"2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)",
			" - Precio vuelo Aerolíneas: ",
			" - Precio vuelo Latam: " };
	int cantOpcionesMenuDos = 3;

	char *opcionesTresCalculosTotales[] = { "3. Calcular todos los costos: "};
	int cantOpcionesMenuTres = 1;


	char *opcionesCuatro[] = { "4. Informar Resultados: " };
	int cantOpcionesMenuCuatro = 1;

	char *opcionesCinco[] = { "5. Carga forzada de datos "};
	int cantOpcionesMenuCinco = 1;

	char *opcionesSalir[]={"6. Salir"};
	int cantOpcionesSalir = 1;

	char *opcionesResultados[] ={
			"  a) Tarjeta de débito (descuento 10%):$ ",
			"  b) Tarjeta de crédito (interés 25%):$ ",
			"  c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos): ",
			"  d) Mostrar precio por km (precio unitario):$ "
		};
	int cantOpcionesResultadosCalculos = 4;

	char *opcionesResultadosSimples[] = {
			"  e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas):$ "
	};
	int cantOpcionesResultadosSimples = 1;



	do {
//		system("cls");
		mostrarOpciones(opcionesMenuUnoIngresoKM, cantOpcionesMenuUno);
		mostrarOpciones(opcionesIngresoPrecioVuelos, cantOpcionesMenuDos);


//		mostrarOpciones(opcionesResultados, cantOpcionesMenuTres);
		//TODO chequear 136----> tira error
		mostrarOpciones(opcionesTresCalculosTotales, cantOpcionesMenuTres);

		//muestro el menu de las 4 opciones a,b,c,d
		mostrarOpciones(opcionesResultados, cantOpcionesResultadosCalculos);


		mostrarOpciones(opcionesResultadosSimples, cantOpcionesResultadosSimples);


		mostrarOpciones(opcionesCuatro, cantOpcionesMenuCuatro);
		//
//		mostrarOpciones(opcionesResultados, cantOpcionesResultadosCalculos);

		//todo chequear 148 y 149
		mostrarResultadoDos(cantOpcionesResultadosCalculos, opcionesResultados, resultadosZ,"Latam");
		mostrarResultadoDos(cantOpcionesResultadosCalculos, opcionesResultados, resultadosY,"Aerolíneas");

		mostrarOpciones(opcionesResultadosSimples, cantOpcionesResultadosSimples);
		mostrarOpciones(opcionesCinco, cantOpcionesMenuCinco);
		mostrarOpciones(opcionesSalir, cantOpcionesSalir);


		//Pido opcion al usuario
		esRtaValida = getInt("Ingrese una opcion: ", 1, 1, CANT_OPCIONES, "Opcion inválida, reingrese opcion: ", &opcionElegida);

	/*****************************	SWITCH	************************************/
		switch (opcionElegida) {
			case (1):
				//INGRESO KM MENU
				printf("Menu de ingreso de Km:\n");
				do {
					auxIngresoKmValido = getFloat(opcionesMenuUnoIngresoKM[0], 5, 1, 999999, "Ingreso incorrecto, reingrese KMs: ", &x);
//					printf(" \n km ingresados: %f\n",x);
					valoresXCompleto = 1;
					if( auxIngresadoY && auxIngresadoZ && auxIngresoKmValido){
						valoresCompletos = 1;
					}
				}while(!auxIngresoKmValido);
				break;



			case (2):

				//PREGUNTAR QUÉ AEROLINEA INGRESAR CON Y O Z
				getChar("Elegir aerolinea: ", 5, "Opcion inválida, reintente: ",  &aerolineaElegida);

				if (aerolineaElegida == 'y'){
//					printf("letra ingresada es la Y\n");
					auxIngresadoY = getPreciosAerolinea("Ingrese precio vuelo en Aerolineas Argentinas: ", &y);
					valoresYCompleto = 1;

				}else if (aerolineaElegida == 'z'){
//					printf("letra ingresada es la Z\n");
					auxIngresadoZ = getPreciosAerolinea("Ingrese precio vuelo en LATAM: ", &z);
					valoresZCompleto = 1;
				}

				//setear una variable que diga VALORCOMPLETOS que permita hacer los calculos si estan completos
				break;

			case (3):
				/*CALCULO DE PRECIOS*/
					if(valoresXCompleto ){
						if (valoresYCompleto){
							//calculo para y
						}else if (valoresZCompleto){
							//calculo para z
						}

						//TODO UNIFICAR DE QUE MANERA SE LLENAN LOS DATOS DEL VECTOR O SE LLAMAN PARA MOSTRAR LOS DATOS

					}
				//SI X,Y,Z no son nulos entonces puedo calcular, si no, no puedo

				//if variablesCompletas --> calcular los costos
				//si se pueden calcular devuelve 0, si no devuelve -1
//				printf("\n CALCULO DE PRECIOS:\n");

				break;
			case (4):
				//INFORMAR RESULTADOS
				system("cls");
				printf("\n INFORMAR RESULTADOS:\n");

				if (valoresCompletos) {
//					printf("\n KMs Ingresados: %d km\n",x);
					mostrarResultadoDos(cantOpcionesResultadosCalculos, opcionesResultados, resultadosZ,"Latam");
					mostrarResultadoDos(cantOpcionesResultadosCalculos, opcionesResultados, resultadosY,"Aerolíneas");

				} else {
					printf("\n Falta ingresar alguno de los valores para realizar calculos \n");
				}


				break;
			case (5):
				//CARGA FORZADA
				printf("\n CARGA FORZADA:\n");

				x = kmForzado;
				y = precioAerolineasForzado;
				z = precioLatamForzado;
				valoresCompletos = 1;
//				printf("\n KMs Ingresados: %d km\n",kmForzado);
//				mostrarResultado("Aerolineas ",kmForzado,precioAerolineasForzado);
//				mostrarResultado("Latam ",kmForzado,precioLatamForzado);
			//FORZAR CALCULOS CON LOS DATOS FORZADOS

				break;
			case (6):
				//SALIR
					deseaSalir = 1;
				break;

		};
		if( valoresZCompleto && valoresXCompleto && valoresYCompleto ){
			valoresCompletos = 1;
		}
		if (valoresCompletos){
			//los valores estan completos entonces puedo calcular lo necesario
			resultadosY[0] = getPrecioTDeb(y);
			resultadosY[1] = getPrecioTCred(y);
			resultadosY[2] = getConversionPesosBT(y, BTCOIN);
			resultadosY[3] = getPrecioPorKM(x,y);

			resultadosZ[0] = getPrecioTDeb(z);
			resultadosZ[1] = getPrecioTCred(z);
			resultadosZ[2] = getConversionPesosBT(z, BTCOIN);
			resultadosZ[3] = getPrecioPorKM(x,z);
		}

		//TODO CHEQUEAR - NO BORRAR
//		mostrarResultadoDos(3, opcionesResultados, resultadosY);
//		mostrarResultadoDos(3, opcionesResultados, resultadosZ);
//		mostrarOpciones(resultadosY,3);



//		precioACred = getPrecioTCred(precioVuelo);
//		precioBT = getConversionPesosBT(precioVuelo, BTCOIN);

	}while (!deseaSalir || !esRtaValida);
	system("pause");
};

/************************************************************************************************************************/
void mostrarResultadoDos(int cantOpciones, char *vectorOpciones[],float vectorResultados[], char aerolinea[]) {
	int i = 0;
	if (cantOpciones > 0 && vectorOpciones != NULL && vectorResultados != NULL && aerolinea != NULL ){
	printf("\n");
	printf(aerolinea);
	printf(":\n");
	for (i; i < cantOpciones; i++) {
		printf(vectorOpciones[i]);
		if (vectorResultados[i] == 0){
			printf("%s","r");
		}else {
			printf("%.2f",vectorResultados[i]);
		}
		printf("\n");
	};

	};


};


void mostrarResultado(char nombreAero[], float kmTotales, float precioVuelo) {
	float precioACred;
	float precioADeb;
	float precioBT;
//	float precioUnitario;


	if (nombreAero != NULL && kmTotales > 0 && precioVuelo > 0){
		printf("\nPrecio %s: $%.2f\n",nombreAero,precioVuelo);
//		printf("%s\n",nombreAero);
		precioACred = getPrecioTCred(precioVuelo);
		precioADeb = getPrecioTDeb(precioVuelo);
		precioBT = getConversionPesosBT(precioVuelo, BTCOIN);
//		float precioUnitario = precioVuelo / kmTotales;
//		float diferenciaPrecio = y - z;

	}

	printf("calculo 1: tcred: %.2f\n", precioACred);
	printf("calculo 2: tcred: %.2f\n", precioADeb);
	printf("calculo 3: btcoin: %.6f\n", precioBT);
};


int getPreciosAerolinea( char mensaje[], float *precioAerolinea){
	int retorno = 0;

	if (precioAerolinea != NULL && mensaje != NULL){
		retorno = getFloat(mensaje, 5, 0, INT_MAX, "Valor incorrecto, reingresar: ", precioAerolinea);
	}
	return retorno;
};



//int getKmUsuario(float *pKMIngresados){
//	return (getFloat("Ingrese cantidad de km: ", 5, 1, 999999, "Ingreso incorrecto, reingrese KMs: ", pKMIngresados));
//
//};


void mostrarOpciones(char *opciones[], int cantOpciones) {
	int i = 0;
	for (i; i < cantOpciones; i++) {
		printf(opciones[i]);
		printf("\n");
	};
}

//void mostrarOpcionesDos(char *opciones[], int cantOpciones, float opciones[]) {
//	int i = 0;
//	for (i; i < cantOpciones; i++) {
//		printf(opciones[i]);
//		printf("\n");
//	};
//}



void imprimirResultadoConValor(char mensaje[], float valor) {

	if (mensaje != NULL){
		printf("%s", mensaje);
		if (valor == 0){
			printf("%s", "r");
		}else {
			printf("%.2f", valor);
		}
		printf("\n");
	}


}
