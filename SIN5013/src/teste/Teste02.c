/*
 * Teste02.c
 *
 *  Created on: 21 de mai de 2019
 *      Author: cnunesdi
 */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define alturaMaxima 225

typedef struct{
	int peso;
	int altura;
}PesoAltura;

typedef int CHAVE;

int teste02(void){
	PesoAltura pessoa1;
	pessoa1.peso = 80;
	pessoa1.altura = 185;

	printf("Peso: %i, Altura %i. " , pessoa1.peso , pessoa1.altura);

	if(pessoa1.altura>alturaMaxima) return printf("Altura acima da maxima. \n");
	else return printf("Altura avaixo da maxima.\n");

}

int teste02B(void){
	PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
	pessoa1->peso = 80;
	pessoa1->altura = 185;

	printf("Peso: %i, Altura %i. " , pessoa1->peso , pessoa1->altura);

	if(pessoa1->altura>alturaMaxima) return printf("Altura acima da maxima. \n");
	else return printf("Altura abaixo da maxima.\n");

	}
