/*
 * maiores.h
 *
 *  Created on: 10 de out de 2020
 *      Author: Diogo CNunes
 */

#ifndef ORDENA_MAIORES_H_
#define ORDENA_MAIORES_H_

	int* maiores(int a[],int n,int k);

	int* heapextractmax(int a[], int heapTam);

	int* buildmaxheap(int a[], int heapTam);

	void maxheapify(int a[], int i, int heapTam);


#endif /* ORDENA_MAIORES_H_ */
