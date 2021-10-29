/**
 * \file bulle.c
 * \author Nicolas Brette & Cyrian Crozier
 * \version 1.0
 * \date 2021-08-10
 */

#include <stdio.h>

/**
 * \brief Tri à bulle
 * \details Tri un tableau de float avec la méthode du tri à bulle
 * \param tab Le tableau à trier 
 * \param size La taille du tableau à trier
 */
void bubblesort(float *tab, int sizetab)
{
    int i, temp, j;
    for (int i = 0; i < sizetab - 1; i++)
    {
        for (int j = 0; j < sizetab - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

}
