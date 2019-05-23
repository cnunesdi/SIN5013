#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 50


	typedef int TIPOCHAVE;

	typedef struct{
		TIPOCHAVE chave;
	}REGISTRO;

	typedef struct{
		REGISTRO A[MAX];
		int nroElemn;
	}Lista;


//	METODOS
	//1.1- deve incializar a lista sem o ponteiro
	void inicializarListaSR(Lista l){
		l.nroElemn = 0;
	}

	//1.2- uma Lista com um ponteiro
	void inicializarLista(Lista* l){
		l->nroElemn = 0;
	}

	//2- REtornar o valor do numero de elementos
	void imprimirLista(Lista* l){
		int i;
		printf("Lista \" ");
		for(i=0;i< l->nroElemn;i++){
			printf("%i", l->A[i].chave);

		printf("\"\n");
	}

	//3-Busca Sequencial
	int buscaSequencial(Lista* l, TIPOCHAVE tc){
		int i = 0;
		while(i< l->nroElemn){
			if(tc == l->A[i].chave) return i;
			else i++;
		}

		return -1;
	}

	//4- Insercao de um elemento
	bool inserirElemLista(Lista* l, REGISTRO reg, int i){

		return 0;
	}






}
