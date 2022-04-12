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
#define CANT_OPCIONES 6




void mostrarOpcionesMenuPrincipal();

int main(void) {
	setbuf(stdout, NULL);
	int opcionesValidas = CANT_OPCIONES;
	int opcionElegida;
	int esValida = 0;
	int deseaSalir = 0;


	mostrarOpcionesMenuPrincipal();

	do{

		getInt("Ingresar opción: ", 3, 1, 6, "Ingresar una opcion válida: ", &opcionElegida);

		if (opcionElegida == 6){
			deseaSalir = 1;
		}
	}while(!deseaSalir);
	imprimirResultadoConValor("Resultado es: ", 6.5);









	return EXIT_SUCCESS;
}


void mostrarOpcionesMenuPrincipal(){
	char *opciones[CANT_OPCIONES];
	opciones[0]= "Ingresar kilometros: \n";
	opciones[1]="Ingresar Precio de Vuelos \n";
	opciones[2]="Calcular todos los costos \n";
	opciones[3]="Informar Resultados \n";
	opciones[4]="Carga forzada de datos \n";
	opciones[5]="Salir \n";

	mostrarOpciones(opciones,CANT_OPCIONES);
}
