#include <stdio.h>

int teste03(void){
	int x = 25;
	int* y = &x;

	*y = 30;

	printf("O valor atual de x e: %i\n", x);

	return 0;

}
