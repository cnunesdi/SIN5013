/*
 * UsarArvoreAVL.h
 *
 *  Created on: 3 de jun de 2019
 *      Author: cnunesdi
 */

#ifndef ARVORE_AVL_USARARVOREAVL_C_
#define ARVORE_AVL_USARARVOREAVL_C_


/******************************************************************************
//     usaArvoreAVL.c
// Este programa interage com o usuario para o gerenciamento de arvores AVL.
******************************************************************************/
#include <stdio.h>

#include "arvoreAVL.c"

void verificaEhAVL(PONT l){
     int alt = 0;
     if (ehAVL2(l,&alt)) printf("Arvore eh AVL.\n");
     else printf("PROBLEMA: a arvore nao eh mais AVL.\n");
}

void inserir(PONT *l){
  TIPOCHAVE01 ch;
  scanf("%i",&ch);
  bool alterou;
  inserirAVL(l,ch,&alterou);
  printf("Elemento %i inserido corretamente.\n",ch);
}

void excluir(PONT *l){
  TIPOCHAVE01 ch;
  scanf("%i",&ch);
  bool alterou;
  if (excluirAVL(l,ch,&alterou)){
    printf("Elemento %i excluido corretamente.\n",ch);
  }else{
    printf("Nao foi possivel excluir elemento com chave igual a %i.\n",ch);
  }
}

void buscar(NO *l){
  TIPOCHAVE01 ch;
  scanf("%i",&ch);
  PONT posicao = buscaBinaria(ch,l);
  if (posicao != NULL) printf("Elemento %i encontrado no endereco %p.\n",ch,posicao);
  else printf("Nao foi possivel encontrar elemento %i.\n",ch);
}

void usaTravessia(NO *l){
  TIPOCHAVE01 ch;
  scanf("%i",&ch);
  int niv;
  if (travessia(l, &niv, ch)) printf("Elemento %i encontrado no nivel %i.\n",ch,niv);
  else printf("Nao foi possivel encontrar elemento %i.\n",ch);
}


void exibirEmOrdem(NO *l){
   printf("Em ordem: ");
   exibirArvoreEmOrdemAVL(l); printf("\n");
}

void exibirArvoreP(NO *l){
   exibirArvore(l); printf("\n");
}

void exibirArvoreX(NO *l){
   printf("Arvore AVL: ");
   exibirArvore2(l,-1); printf("\n");
}

void exibirAltura(NO *l){
   printf("Altura da Arvore AVL: %i\n", altura(l));
}

void exibirPreOrdem(NO *l){
   printf("Pre ordem: ");
   exibirArvorePreOrdemAVL(l); printf("\n");
}


void exibirPosOrdem(NO *l){
   printf("Pos ordem: ");
   exibirArvorePosOrdem(l); printf("\n");
}



void help(){
  printf("Comandos validos: \n");
  printf("   i <chave1>: inserir elemento com chave=chave1\n");
  printf("   e <chave1>: excluir elemento com chave=chave1\n");
  printf("   d : destruir (liberar memoria)\n");
  printf("   h : exibir esta mensagem de ajuda\n");
  printf("   b <chave1>: exibir endereco do elemento com chave=chave1\n");
  printf("   a : exibir a altura da arvore\n");
  printf("   0 : exibir arvore EM ordem.\n");
  printf("   1 : exibir arvore PRE-ordem.\n");
  printf("   2 : exibir arvore POS-ordem.\n");
  printf("   3 : exibir arvore parenteses.\n");
  printf("   9: verifica se arvore eh AVL.\n");
}

void destruir(PONT *l){
     destruirArvore(l);
     printf("Arvore zerada (toda memoria liberada).\n");
}

void mainArvoreAVL(){
  PONT raiz;
  inicializar(&raiz);
  help();
  char comando = ' ';
  scanf("%c",&comando);
  while (comando != 'q'){
    switch (comando) {
      case 'i' : inserir(&raiz); break;
      case 'e' : excluir(&raiz); break;
      case 'd' : destruir(&raiz); break;
      case 'h' : help(); break;
      case 'b' : buscar(raiz); break;
      case 'a' : exibirAltura(raiz); break;
      case '0' : exibirEmOrdem(raiz); break;
      case '1' : exibirPreOrdem(raiz); break;
      case '2' : exibirPosOrdem(raiz); break;
      case '3' : exibirArvoreP(raiz); break;
      case '5' : exibirArvoreX(raiz); break;
      case '9' : verificaEhAVL(raiz); break;
      default: {while (comando != '\n') scanf("%c",&comando);};
    }
    scanf("%c",&comando);
  }

}



#endif /* ARVORE_AVL_USARARVOREAVL_C_ */
