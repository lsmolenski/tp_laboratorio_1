/*
 * menu_libreria.h
 *
 *  Created on: 10 abr. 2022
 *      Author: lucas
 */

#ifndef MENU_LIBRERIA_H_
#define MENU_LIBRERIA_H_




#endif /* MENU_LIBRERIA_H_ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarResultado(char nombreAero[], float kmTotales, float precioVuelo);
void imprimirResultadoConValor(char mensaje[], float valor);
void mostrarOpciones(char *opciones[], int cantOpciones);
int getPreciosAerolinea( char mensaje[],float *precioAerolinea);
int getKmUsuario(float *pKMIngresados);
void MenuPrincipal();
