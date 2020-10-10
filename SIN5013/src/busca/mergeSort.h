/*
 * mergeSort.h
 *
 *  Created on: 8 de jun de 2019
 *      Author: cnunesdi
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_

#include <stdio.h>
#include "intercala.h"

 void mergesort (int a[], int ini, int fim){
  int n=fim-ini +1;

  if(n>=4){
      int med =(ini     +fim)/2;
      int q1 = (ini     +med)/2;
      int q3 = (med +1  +fim)/2;

      mergesort (a,   ini,    q1);
      mergesort (a,   q1  +1, med);
      mergesort (a,   med +1, q3);
      mergesort (a,   q3  +1, fim);

      intercala (a,   ini,    q1,   med);
      intercala (a,   med  +1, q3,  fim);
      intercala (a,   ini,    med,   fim);
  }
}

 void mergesort2 (int a[], int ini, int fim){
    if (ini < fim-1) {
       int med = (ini + fim)/2;
       mergesort (a, ini, med);
       mergesort (a, med, fim);
       intercala (a, ini, med, fim);
    }
 }

#endif
