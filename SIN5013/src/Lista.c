#include<stdio.h>
#include<stdlib.h>
#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
	TIPOCHAVE chave;
}REGISTRO;

typedef struct{
	REGISTRO A[MAX];
	int nroElemn;
}Lista;





