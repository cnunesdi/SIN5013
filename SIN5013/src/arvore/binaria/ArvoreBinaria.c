/******************************************************************************
  ArvoreBinaria.c
  Este programa gerencia arvores Binarias.
******************************************************************************/
#include <stdio.h>
#include <malloc.h>

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
PONT buscarChaveAB(TIPOCHAVE ch, PONT raiz){
  if (raiz == NULL) return NULL;
  if (raiz->chave == ch) return raiz;
  PONT aux = buscarChaveAB(ch,raiz->esq);
  if (aux) return aux;
  return buscarChaveAB(ch,raiz->dir);
}

/* aloca memoria, preenche os campos e retorna o endereco de um no           */
PONT criarNovoNoAB(TIPOCHAVE ch){
   PONT novoNo = (PONT)malloc(sizeof(NO));
   novoNo->esq = NULL;
   novoNo->dir = NULL;
   novoNo->chave = ch;
   return novoNo;
}

/* insere um novo no como filho de um no ja existente
   o novo no sera pai do antigo filho de seu pai                             */
bool inserirFilhoAB(PONT raiz, TIPOCHAVE novaChave, TIPOCHAVE chavePai, LADO lado){
  PONT pai = buscarChaveAB(chavePai,raiz);
  if (!pai) return false;
  PONT novo = criarNovoNoAB(novaChave);
  if (lado == esquerdo){
    novo->esq = pai->esq;
    pai->esq = novo;
  }else{
     novo->esq = pai->dir;
     pai->dir = novo;
  }
  return true;
}

/* exibe a arvore recursivamente em 'pre-ordem', ou seja, primeiro o no atual
   seguido pela subarvore a esquerda e entao a subarvore a direita          */
void exibirArvoreABPreOrdemAB(PONT raiz){
  if (raiz == NULL) return;
  printf("%c ",raiz->chave);
  exibirArvoreABPreOrdemAB(raiz->esq);
  exibirArvoreABPreOrdemAB(raiz->dir);
}

/* exibe a arvore recursivamente em 'pre-ordem', usando parenteses para
   delimitar os descentes do elemento atual                                 */
void exibirArvoreAB(PONT raiz){
  if (raiz == NULL) return;
  printf("%c",raiz->chave);
  printf("(");
  exibirArvoreAB(raiz->esq);
  printf("|");
  exibirArvoreAB(raiz->dir);
  printf(")");
}

/* retorna o maior entre os dois valores de entrada */
int max(int a, int b){
  if (a>b) return a;
  return b;
}

/* calcula de maneira recursiva a altura da arvore
   assumiu-se que a altura de uma folha vale zero                            */
int alturaArvoreAB(PONT raiz){
  if (!raiz ) return -1;
  return 1 + max(alturaArvoreAB(raiz->esq),alturaArvoreAB(raiz->dir));
}

/* calcula de maneira recursiva a quantidade de elementos de uma arvore      */
int numeroNosAB(PONT raiz){
  if (!raiz ) return 0;
  return 1 + numeroNosAB(raiz->esq) + numeroNosAB(raiz->dir);
}

/* inicializa uma arvore cujo endereco da variavel que aponta para a raiz esta
   armzaenado na variavel raiz */
void inicializarAB(PONT * raiz){
  *raiz = NULL;
}

/* cria a raiz da arvore e coloca seu endereco na variavel apontada por raiz*/
void criarRaizAB(PONT * raiz, TIPOCHAVE novaChave){
    *raiz = criarNovoNoAB(novaChave);
}

void mainArvoreBinaria(){
  PONT raiz;
  inicializarAB(&raiz);
  criarRaizAB(&raiz,'a');
  inserirFilhoAB(raiz,'b','a',esquerdo);
  inserirFilhoAB(raiz,'c','b',direito);
  printf("Numero de Nos: %d.\n", numeroNosAB(raiz));
  printf("Altura: %d.\n", alturaArvoreAB(raiz));
  exibirArvoreAB(raiz);
  printf("\n");
  inserirFilhoAB(raiz,'d','c',esquerdo);
  inserirFilhoAB(raiz,'e','b',esquerdo);
  inserirFilhoAB(raiz,'f','e',esquerdo);
  inserirFilhoAB(raiz,'g','f',esquerdo);
  printf("Numero de Nos: %d.\n", numeroNosAB(raiz));
  printf("Altura: %d.\n", alturaArvoreAB(raiz));
  exibirArvoreAB(raiz);
  printf("\n");
  inserirFilhoAB(raiz,'h','d',direito);
  inserirFilhoAB(raiz,'i','h',esquerdo);
  inserirFilhoAB(raiz,'j','i',esquerdo);
  printf("Numero de Nos: %d.\n", numeroNosAB(raiz));
  printf("Altura: %d.\n", alturaArvoreAB(raiz));
  exibirArvoreAB(raiz);
  printf("\n");

  char fim;
  printf("\nPressione <ENTER> para terminar.\n");
  scanf("%c",&fim);

}

