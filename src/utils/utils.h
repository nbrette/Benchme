/**
 * \file utils.h
 * \author Nicolas Brette & Cyrian Crozier
 * \version 1.0
 * \date 2021-08-10
 */

/**
 * \brief rempli un tableau de float
 * \details itère sur le tableau passé en paramètre et le rempli avec des float générés aléatoirement
 * \param tab Le tableau à remplir
 * \param size La taille du tableau qui sera utilisé dans la boucle
 */
void fillTab(float *tab,int size);

/**
 * \brief affiche un tableau de float
 * \details itère sur le tableau passé en paramètre et affiche chaque élément
 * \param tab Le tableau à afficher 
 * \param size La taille du tableau qui sera utilisé dans la boucle
 */
void displayTab(float *tab, int size);
