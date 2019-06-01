/*
 * arvoreBinaria.h
 *
 *  Created on: 1 de jun de 2019
 *      Author: cnunesdi
 */

#ifndef ARVOREBINARIA_H_
#define ARVOREBINARIA_H_

/******************************************************************************
  ArvoreBinaria.c
  Este programa gerencia arvores Binarias.
******************************************************************************/
#define true 1
#define false 0

typedef enum{esquerdo, direito} LADO;

typedef int bool;
typedef char TIPOCHAVE;

typedef struct aux{
  TIPOCHAVE chave;
  struct aux *esq, *dir;
} NO;

typedef NO* PONT;

/* retorna o endereco do NO que contem chave=ch ou NULL caso a chave nao seja
   encontrada.                                                                */
PONT buscarChaveAB(TIPOCHAVE ch, PONT raiz);

/* aloca memoria, preenche os campos e retorna o endereco de um no           */
PONT criarNovoNoAB(TIPOCHAVE ch);

/* insere um novo no como filho de um no ja existente
   o novo no sera pai do antigo filho de seu pai                             */
bool inserirFilhoAB(PONT raiz, TIPOCHAVE novaChave, TIPOCHAVE chavePai, LADO lado);

/* exibe a arvore recursivamente em 'pre-ordem', ou seja, primeiro o no atual
   seguido pela subarvore a esquerda e entao a subarvore a direita          */
void exibirArvorePreOrdemAB(PONT raiz);

/* exibe a arvore recursivamente em 'pre-ordem', usando parenteses para
   delimitar os descentes do elemento atual                                 */
void exibirArvoreAB(PONT raiz);

/* retorna o maior entre os dois valores de entrada */
int max(int a, int b);

/* calcula de maneira recursiva a altura da arvore
   assumiu-se que a altura de uma folha vale zero                            */
int alturaArvoreAB(PONT raiz);

/* calcula de maneira recursiva a quantidade de elementos de uma arvore      */
int numeroNosAB(PONT raiz);

/* inicializa uma arvore cujo endereco da variavel que aponta para a raiz esta
   armzaenado na variavel raiz */
void inicializarAB(PONT * raiz);

/* cria a raiz da arvore e coloca seu endereco na variavel apontada por raiz*/
void criarRaizAB(PONT * raiz, TIPOCHAVE novaChave);

void mainArvoreBinaria();



#endif /* ARVORE_BINARIA_ARVOREBINARIA_H_ */
