/*
 * heap.h
 *
 *  Created on: 10 de out de 2020
 *      Author: Diogo CNunes
 */

#include <stdio.h>
#include <stdlib.h>
#include "maiores.h"

int* maiores(int a[],int n,int k){
	int b[k];

	buildmaxheap(a, n);
	for(int i=0; i < k; i++){
		b[i] = heapextractmax(a, n);
	}

	return b;
}

int* heapextractmax(int a[], int heapTam){
	int max = a[0];
	a[0] = a[heapTam];
	heapTam = heapTam-1;

	maxheapify(a, 0, heapTam);

	return max;
}

int* buildmaxheap(int a[], int heapTam){
	for(int i=heapTam/2; i>=0; i--){
		maxheapify(a, i, heapTam);
	}
	return a;
}

void maxheapify(int a[], int i, int heapTam){
	int temp, maior, esquerda, direita;
	esquerda = (2*i);
	direita = (2*i+1);

	if( (esquerda <= heapTam) && (a[esquerda] > a[i]) )
		maior = esquerda;
	else maior = i;

	if( (direita <= heapTam) && (a[direita] > a[maior]) )
		maior = direita;

	if (maior != i){
		temp = a[i];
		a[i] = a[maior];
		a[maior] = temp;
		maxheapify(a, maior, heapTam);
	}
}
