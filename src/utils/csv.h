/**
 * \file csv.h
 * \author Nicolas Brette & Cyrian Crozier
 * \version 1.0
 * \date 2021-08-10
 */

/**
 * \brief Crée un fichier 
 * \details  Crée un fichier avec le nom et le format passé en argument  et défini les entêtes
 * \param filename Le nom du fichier avec son nom extension
 */
void create_csv(char *filename);

/**
 * \brief Ecrit dans un fichier
 * \details  Ecrit dans un fichier csv les données passées en argument 
 * \param filename Le nom du fichier avec son nom extension
 * \param name Nom de l'algorithme
 * \param size Taille du tableau qui a été trié
 * \param average Temps de tri moyen
 */
void export_csv(char *filename,char *name, int size, float average);