#include <stdio.h>
#include <malloc.h>

#define true 1
#define false 0;

typedef int bool;
typedef int TIPOCHAVE;

typedef struct aux{
TIPOCHAVE chave;
struct aux *esq, *dir;
}NO;

typedef NO* PONT;

/*Retorna o endereco do no que contem chave=ch, ou NULL caso a chave nao seja encontrada
 * Utilizada no recursivo.*/
PONT buscaBinaria(TIPOCHAVE ch, PONT raiz){

}
