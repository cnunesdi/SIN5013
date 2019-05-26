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

	void inicializarLista(LISTA* l);

	void exibirLista(LISTA* l);

	int tamanho(LISTA* l);

	int tamanhoEmBytes(LISTA* l);

	TIPOCHAVE primeiroElem(LISTA* l);

	TIPOCHAVE ultimoElem(LISTA* l);

	TIPOCHAVE enesimoElem(LISTA* l, int n);

	void reinicializarLista(LISTA* l);

	bool inserirElemLista(LISTA* l, REGISTRO reg, int i);

	int buscaSequencial(LISTA* l, TIPOCHAVE ch);

	bool excluirElemLista(LISTA* l, TIPOCHAVE ch);

	int buscaSentinela(LISTA* l, TIPOCHAVE ch);

	void mainListaSequencial();


#endif /* LISTA_H_ */
