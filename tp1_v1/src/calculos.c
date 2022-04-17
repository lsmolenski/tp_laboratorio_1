/*
 * calculos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: lucas
 */

#include "calculos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PORCENTAJE_TCRED 25
#define PORCENTAJE_TDEB 10
#define PORCENTAJE_TDEB 10



/*
 * CALCULA EL PRECIO FINAL DE ACUERDO A SI SE APLICA UN INTERES O UN DESCUENTO:
 * 		- precioOrig
 * 		- esInteres			(0,1)
 * 		- valorPorcentaje   (1,100)
 * 		- precioFinal
 * SI esInteres == 0 --> aplica 'valorPorcentaje' como descuento
 * SI esInteres == 1 --> aplica 'valorPorcentaje' como interes
 *
 */

int getPrecioFinal(float precioOrig, int esInteres, int valorPorcentaje, float *precioFinal){
	//ANDA OK
	float valorFinal;
	int retorno = 0;

	if (precioOrig > 0 && (esInteres == 0 || esInteres == 1)&& (valorPorcentaje > 0 && esInteres <= 100) && (precioFinal != NULL) ){
//		valorFinal = precioOrig;
		switch (esInteres) {
			case 0:{
				valorFinal = precioOrig - (precioOrig* valorPorcentaje/100);
				break;

			};
			case 1:{
				valorFinal = precioOrig + (precioOrig* valorPorcentaje/100);
				break;
			}

		}

		retorno = 1;
		*precioFinal = valorFinal;

	}

	return retorno;

};



float getPrecioTCred(float precioInicial){
	float valorFinal = 0;
	float *valorFinalp;

	valorFinalp = &valorFinal;
	getPrecioFinal(precioInicial, 1, PORCENTAJE_TCRED, valorFinalp);
	return valorFinal;
};


float getPrecioTDeb(float precioInicial){
	float valorFinal = 0;
	float *valorFinalp;

	valorFinalp = &valorFinal;
	getPrecioFinal(precioInicial, 0, PORCENTAJE_TDEB, valorFinalp);
	return valorFinal;
};

float getPrecioPorKM(float precioViaje, float cantKm){
	return precioViaje/cantKm;
};

//Devuelve conversion Pesos a BitCoin
float getConversionPesosBT(float precioPasaje, float precioBTActual){
	float retornoBT;

	if (precioPasaje > 0 && precioBTActual > 0){
		retornoBT = precioPasaje / precioBTActual;
	}
//	printf(" \n bitcoin: %.6f ",retornoBT) ;

	return retornoBT;
};
