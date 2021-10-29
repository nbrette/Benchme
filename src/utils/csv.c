/**
 * \file csv.c
 * \author Nicolas Brette & Cyrian Crozier
 * \version 1.0
 * \date 2021-08-10
 */

#include <stdio.h>

/**
 * \brief Crée un fichier 
 * \details  Crée un fichier avec le nom et le format passé en argument  et défini les entêtes
 * \param filename Le nom du fichier avec son nom extension
 */
void create_csv(char *filename){
    FILE *fichier = fopen(filename, "a+");
    fprintf(fichier,"Algorithme , Taille tableau, Temps moyen\n");
    fclose(fichier);
}

/**
 * \brief Ecrit dans un fichier
 * \details  Ecrit dans un fichier csv les données passées en argument 
 * \param filename Le nom du fichier avec son nom extension
 * \param name Nom de l'algorithme
 * \param size Taille du tableau qui a été trié
 * \param average Temps de tri moyen
 */
void export_csv(char *filename,char *name, int size, float average){
    FILE *fichier = fopen(filename, "a+");
    fprintf(fichier, "%s, %d, %f\n", name, size, average);
    fclose(fichier);
}