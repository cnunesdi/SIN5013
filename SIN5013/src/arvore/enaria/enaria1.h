/*
 * enaria.h
 *
 *  Created on: 29 de mai de 2019
 *      Author: cnunesdi
 */

#ifndef ENARIA1_H
#define ENARIA1_H

/******************************************************************************
     arvoreEnaria1.c
  Este programa gerencia arvores n-arias (cada noh pode ter um numero ilimitado
  de filhos. Esta estrutura usa uma lista ligada de filhos.
******************************************************************************/
	#define true 1
	#define false 0

	typedef int bool;
	typedef int TIPOCHAVE;

	typedef struct {
	  TIPOCHAVE chave;
	  void * filhos;
	} NO;

	typedef NO* PONT;

	typedef struct auxF {
	  PONT no;
	  struct auxF * prox;
	}FILHOS;

/******************************************************************************
     arvoreEnaria1.c
  Este programa gerencia arvores n-arias (cada noh pode ter um numero ilimitado
  de filhos. Esta estrutura usa uma lista ligada de filhos.
******************************************************************************/
	PONT buscarChave(TIPOCHAVE ch, PONT raiz);

	PONT criarNovoNo(TIPOCHAVE ch);

	bool inserirFilho(PONT raiz, TIPOCHAVE novaChave, TIPOCHAVE chavePai);

	void exibirArvore(PONT raiz);

	PONT criarRaiz(TIPOCHAVE novaChave);

	void mainArvoreEnaria1();


#endif /* ARVORE_ENARIA_ENARIA_H_ */
