/*
 * intercala.h
 *
 *  Created on: 8 de jun de 2019
 *      Author: cnunesdi
 */

#ifndef INTERCALA_H_
#define INTERCALA_H_

#include <stdio.h>

 void intercala (int v[], int p, int q, int r){
   int *w;                                 //  1
   w = malloc ((r-p) * sizeof (int));      //  2
   int i = p, j = q;                       //  3
   int k = 0;                              //  4

   while (i < q && j < r) {                //  5
      if (v[i] <= v[j])  w[k++] = v[i++];  //  6
      else  w[k++] = v[j++];               //  7
   }                                       //  8
   while (i < q)  w[k++] = v[i++];         //  9
   while (j < r)  w[k++] = v[j++];         // 10
   for (i = p; i < r; ++i)  v[i] = w[i-p]; // 11
   free (w);                               // 12
}

#endif
