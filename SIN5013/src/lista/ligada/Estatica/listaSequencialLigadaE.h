/*
 * listaSequencialLigadaE.h
 *
 *  Created on: 8 de jun de 2019
 *      Author: cnunesdi
 */

#ifndef LISTA_LIGADA_LISTASEQUENCIALLIGADAE_H_
#define LISTA_LIGADA_LISTASEQUENCIALLIGADAE_H_

#define MAX 50
#define ERRO -1
#define NUL -1
#define true 1
#define false 0

typedef int bool;

typedef int TIPOCHAVE;

typedef struct{
	TIPOCHAVE chave;
	int prox;
	//outros campos...
}REGISTRO;

typedef struct{
	REGISTRO A[MAX+1];
	int inicio;
	int dispo;
}LISTA;

/*
 * Inicializacao da lista sequencial
 * A lista jah esta criada e eh apontada pelo endereco em l
 */
void inicializarLista(LISTA *l){
	int i;
	l->inicio = 0;
	l->dispo = NUL;
	for(i=0; i<MAX-1;i++)
		l->A[i].prox = i + 1;

	l->A[MAX-1].prox = NUL;
}

/*
 * Exibicao da lista sequencial
 */
void exibirLista(LISTA *l){
	int i = l->inicio;
	printf("Lista: \" ");
	while (i!=NUL) {
		printf("%d ", l->A[i].chave);// soh lembrando TIPOCHAVE = int
		i = l->A[i].prox;
	}
	printf("\"\n");
}

/*
 * Retorna o tamnho da lista
 * Numero de elementos validos
 */
int tamanho(LISTA *l){
	int i = l->inicio;
	int tam = 0;
	while(i!=NUL){
		tam++;
		i = l->A[i].prox;
	}
	return tam;
}

/*
 * Retorna o tamanho em bytes da lista.
 * Neste caso naodepende do numero de elementos que estao sendo usados.
 * Pois a alocacao de memoria eh estatica.
 * A priori nao precisamos de um elemento na lista.
 * vamos utiliza-lo apenas porque teremos as mesmas funcoes para listas ligadas implementadas nao estatica.
 */
int tamanhoEmBytes(LISTA *l){
	return sizeof(LISTA);
}

/*
 * Busca Sequencial
 * Ordenada ou nao
 */
int buscaSeq(TIPOCHAVE ch, LISTA *l){
	int i = l->inicio;
	while(i!=NUL){
		if ( l->A[i].chave == ch ) return i;
		i = l->A[i].prox;
	}
	return NUL;
}

/*
 * Busca Sequencial - Funcao de exclusao
 * retorna no endereco *ant o endereco anterior ao elemento que estah sendo buscado.
 * [ ant recebe o elemento anterior independente buscado ser ou nao encontrado]
 */
int buscaSeqExc(TIPOCHAVE ch, LISTA *l, int *ant){
	*ant = NUL;
	int i = l->inicio;
	while ( (i!=NUL) && (l->A[i].chave <ch) ){
		*ant = i;
		i = l->A[i].prox;
	}
	if( (i!=NUL) && (l->A[i].chave == ch) ) return i;
	return NUL;
}

/*
 * Obter noh disponivel e marca-lo como nao disponivel
 * Esta operacao sera realizada junto com as insercoes, por exemplo.
 */
int obterNo(LISTA *l){
	int resultado = l->dispo;
	if(l->dispo != NUL) l->dispo = l->A[l->dispo].prox;
	return resultado;
}

/*
 * Devolver no da posicao j da listo de nos disponiveis.
 * Coloca-se o no j como o primeiro da lista de disponiveis
 */
void devolverNo(LISTA *l, int j){
	l->A[j].prox = l->dispo;
	l->dispo = j;
}

/*
 * Exclusao de um elemento da chave inciada
 */
bool excluirElemLista(TIPOCHAVE ch, LISTA *l){
	int ant, i;
	i = buscaSeqExc(ch, l, &ant);
	if (i == NUL) return false;
	if (ant == NUL) l->inicio = l->A[i].prox;
	devolverNo(l, i);
	return true;
}

/*
 * Destruicao da lista sequencial
 */
void destruirLista(LISTA *l){
	inicializarLista(l);
}

/*
 * Insercao de lista ordenada sem repeticao
 */
bool inserirElemListaOrd(REGISTRO reg,LISTA *l){
	if(l->dispo == NUL) return false;// se lista cheia, nao eh possivel inserir
	TIPOCHAVE ch = reg.chave;
	int ant,i;
	i = buscaSeqExc(ch, l, ant);
	if (i== NUL) return false;
	i = obterNo(l);
	l->A[i] = reg;
	if (ant == NUL) {// o novo elemento sera o primeiro da lista (a lista poderia estar vazia ou nao)
		l->A[i].prox = l->inicio;
		l->inicio = i;
	}else{//insercao de um elemento ja existente
		l->A[i].prox = l->A[ant].prox;
		l->A[ant].prox = i;
	}
	return true;
}









#endif /* LISTA_LIGADA_LISTASEQUENCIALLIGADAE_H_ */
