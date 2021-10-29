/**
 * \file insertion.c
 * \author Nicolas BRETTE, Cyrian CROZIER
 * \version 1.0
 * \date 2021-08-10
 */


#include <stdio.h>
#include <stdlib.h>


/**
 * \brief Tri par selection
 * \details  Tri un tableau de float en utilisant la méthode par selection
 * \param tab Tableau de float
 * \param size Taille du tableau
 */

void selection(float *tab, int size){

    int i, j, min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
            if (tab[j] < tab[min])
                min = j;

        float temp = tab[min];
        tab[min] = tab[i];
        tab[i] = temp;
           
    }
}

