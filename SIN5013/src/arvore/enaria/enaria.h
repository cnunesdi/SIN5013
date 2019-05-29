/*
 * enaria.h
 *
 *  Created on: 29 de mai de 2019
 *      Author: cnunesdi
 */

#ifndef ENARIA_H
#define ENARIA_H

/******************************************************************************
     arvoreEnaria1.c
  Este programa gerencia arvores n-arias (cada noh pode ter um numero ilimitado
  de filhos. Esta estrutura usa uma lista ligada de filhos.
******************************************************************************/
	#define true 1
	#define false 0

	typedef int bool;
	typedef char TIPOCHAVE;

	typedef struct {
	  TIPOCHAVE chave;
	  void * filhos;
	} NO;

	typedef NO* PONT;

	typedef struct auxF {
	  PONT no;
	  struct auxF * prox;
	}FILHOS;


#endif /* ARVORE_ENARIA_ENARIA_H_ */
