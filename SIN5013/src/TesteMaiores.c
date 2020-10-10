/*
 * TesteMaiores.c
 *
 *  Created on: 10 de out de 2020
 *      Author: Diogo CNunes
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

#include "ordena/maiores.h"


int main() {

//	 int *a = calloc(MAX, sizeof(int));
//	 int *m = calloc(MAX, sizeof(int));

//	 printf("Enter no of elements in the array\n");
//	 scanf("%d", &n);
//
//	 printf("Enter no of k \n");
//	 scanf("%d", &k);

	 int n =20, m=9, k=2;
	 int a[20] = {56,23,89,4,78,45,12,2,6,5,48,20,15,36,60,80,90,150,1,6};

	 int b[9] = {40,20,15,35,80,71,16,21,70};

//	 printf("Enter the array\n");
//	 for (int i = 1; i < n; i++) {
//		 scanf("%d", &a[i]);
//	 }

	 maiores(b, m, k);
	 printf("The heap is\n");
	 for (int t = 0; t < m; t++) {
		 printf("%d ", b[t]);
	 }

	 return 0;


}
