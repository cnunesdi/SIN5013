#include <stdio.h>
#include <malloc.h>

int mallocTest(){
	int *y = (int*) malloc(sizeof(int));
	*y = 20;

	int z  = sizeof(int);
	return printf("*y=%i z=%i\n", *y,z);
}
