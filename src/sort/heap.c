
/**
 * \file heap.c
 * \author Nicolas Brette & Cyrian Crozier
 * \version 1.0
 * \date 2021-08-10
 */

#include <stdio.h>

/**
 * \brief Échange deux valeurs
 * \param a La première valeur à inverser
 * \param b La deuximèe valeur à inverser
 */
void swap(float *a, float *b)
{
  float temp = *a;
  *a = *b;
  *b = temp;
}


void heapify(float *tab, int n, int i)
{

  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && tab[left] > tab[largest])
    largest = left;

  if (right < n && tab[right] > tab[largest])
    largest = right;

  if (largest != i)
  {
    swap(&tab[i], &tab[largest]);
    heapify(tab, n, largest);
  }
}

/**
 * \brief Tri par tas
 * \details Tri un tableau de float avec la méthode du tri par tas
 * \param tab Le tableau à trier 
 * \param size La taille du tableau à trier
 */
void heapSort(float *tab, int size)
{

  for (int i = size / 2 - 1; i >= 0; i--)
    heapify(tab, size, i);

  for (int i = size - 1; i >= 0; i--)
  {
    swap(&tab[0], &tab[i]);

    heapify(tab, i, 0);
  }
}