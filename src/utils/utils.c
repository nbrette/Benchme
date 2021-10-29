/**
 * \file utils.c
 * \author Nicolas Brette & Cyrian Crozier
 * \version 1.0
 * \date 2021-08-10
 */

#include <stdio.h>
#include <time.h>

/**
 * \brief affiche un tableau de float
 * \details itère sur le tableau passé en paramètre et affiche chaque élément
 * \param tab Le tableau à afficher 
 * \param size La taille du tableau qui sera utilisé dans la boucle
 */
void displayTab(float *tab, int size){
for (int i = 0; i < size; i++)
	{
		printf("%.01f ", tab[i]);
	}
	printf("\n");
}
/**
 * \brief rempli un tableau de float
 * \details itère sur le tableau passé en paramètre et le rempli avec des float générés aléatoirement
 * \param tab Le tableau à remplir
 * \param size La taille du tableau qui sera utilisé dans la boucle
 */
void fillTab(float *tab,int size){
	srand(time(NULL));
	for (int i = 0; i < size-1; i++)
	{
		tab[i] =  (float) (rand() % 1000);
	}
}