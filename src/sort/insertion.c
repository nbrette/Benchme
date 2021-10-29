/**
 * \file insertion.c
 * \author Nicolas BRETTE, Cyrian CROZIER
 * \version 1.0
 * \date 2021-08-10
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Tri par insertion 
 * \details  Tri un tableau de float en utilisant la méthode par insertion
 * \param tab Tableau de float
 * \param size Taille du tableau
 */

void insertion(float *tab, int size){

int i,j,x;
    for(i=1 ; i<=size-1; i++)
  {
      x=tab[i];
      j=i;
      while((j>0) &&(tab[j-1]>x))
      {
        tab[j]=tab[j-1];
        j=j-1;
      }
      tab[j]=x;
  }

}
