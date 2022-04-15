///*
// ============================================================================
// Name        : tp1_v1.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
// ============================================================================
// */
//
//
//#include "pedir_datos_bib.h"
//
//int main(void) {
//	setbuf(stdout, NULL);
////	printf("!!!Que ondis!!!"); /* prints !!!Hello World!!! */
////	imprimir();
////	int numero = pedirDatoNumerico("\nIngrese un dato: ");
////	fflush(stdin);
////	printf("numero ingresado: %d", numero);
//
//
//	//	LAS VARIABLES NUMERICAS, STRINGS, CHARS, NUMEROS, NO SON COMPARABLES CON NULL
//	// 	SOLO LOS PUNTEROS O VECTORES PUEDEN SER COMPARADOS CON NULOS
//	int numeroOficial;
//	int retScanf;
//
//	retScanf = getInt("\nIngresar un numero", 3, 0, 10, "\nDebes ingresar una opcion valida: ", &numeroOficial);
//
//
//
//	return EXIT_SUCCESS;
//}



//int maximoArray(int arrayNumeros[], int tam, int *maximo, int *posicion){
//	int i;
//	int ingresoMax;
//	int posicionAux;
//	int retorno = -1;
//
//	if (arrayNumeros != NULL && tam > 0 && maximo != NULL){
//		for (i = 0; i < tam; i++){
//			if ( i == 0 || ingresoMax < arrayNumeros[i]){
//				ingresoMax = arrayNumeros[i];
//				posicionAux = i;
//				retorno = 0;
//			}
//		}
//	}
//
//	*maximo = ingresoMax;
//	*posicion = posicionAux;
//	return 0;
//}
