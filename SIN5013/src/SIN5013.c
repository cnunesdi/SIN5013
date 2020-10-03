/*
 ============================================================================
 Name        : SIN5013.c
 Author      : Diogo CNunes
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//#include "lista/ligada/Estatica/usaListaLigadaInterativo.h"
#include "busca/mergeSort.h"

//int somaRecusiva(int *a,int n);

int main(void) {
//	mainListaLigadaE();

//	 int n = 3;
//	 int a[4] = {5,9,7,6};
//
//	 int resultado = somaRecusiva(a,n);
//
//	 return resultado;
			 //EXIT_SUCCESS;

	 int a[20] = {56,23,89,4,78,45,12,2,6,5,48,20,15,36,60,80,90,150,1,6};
	 mergesort2(a,1,20);

	 return 0;

}
