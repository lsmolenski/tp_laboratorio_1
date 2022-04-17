/*
 * libreria1.h
 *
 *  Created on: 5 abr. 2022
 *      Author: lucas
 */

#ifndef LIBRERIA1_H_
#define LIBRERIA1_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#endif /* LIBRERIA1_H_ */

void imprimir();
int pedirDatoNumerico(char []);
int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[],int *pNumeroIngresado);
int getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[],float *pNumeroIngresado);
int getChar(char mensaje[], int reintentos, char mensajeError[],char *pOpcionIngresada);
int validarIngresoCaracter(char *);
