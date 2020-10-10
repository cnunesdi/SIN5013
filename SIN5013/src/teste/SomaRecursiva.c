/*
 * SomaRecursiva.c
 *
 *  Created on: 24 de ago de 2020
 *      Author: diogo
 */


#include <stdio.h>
#include <stdlib.h>

int somaRecusiva(int *a,int n){
    if(n==0){
      return a[0];
    }
    int s = somaRecusiva(a,n-1)+a[n];
    return s;
}
