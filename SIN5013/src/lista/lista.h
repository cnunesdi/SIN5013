/*
 * ListaSequencial.h
 *
 *  Created on: 26 de mai de 2019
 *      Author: cnunesdi
 */

#ifndef LISTA_H
#define LISTA_H

	#define MAX 50
	#define ERRO -1
	#define true 1
	#define false 0

	typedef int bool;

	typedef int TIPOCHAVE;

	typedef struct{
	  TIPOCHAVE chave;
	  // outros campos...
	} REGISTRO;

	typedef struct {
	  REGISTRO A[MAX+1];
	  int nroElem;
	} LISTA;

#endif /* LISTA_H_ */
