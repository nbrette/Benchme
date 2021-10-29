/**
 * @file main.c
 * @author Nicolas Brette & Cyrian Crozier
 * @version 1.0
 * @date 2021-08-10
 */

#include <stdio.h>
#include "sort/bulle.h"
#include "utils/utils.h"
#include "sort/heap.h"
#include <time.h>
#include "utils/csv.h"
#include "sort/insertion.h"
#include "sort/selection.h"

int main(int argc, char **argv)
{
	float tab1[100];
	float tab2[1000];
	float tab3[10000];
	float tab4[100000];

	int sizes[4] = {100, 1000, 10000, 100000};
	float *tabs[4] = {tab1, tab2, tab3, tab4};
	float averages[4];
	char *filename;
	//Défini un nom de fichier par défaut si aucun argument de ligne de commande n'a été donné
	if (argv[1] == NULL)
	{
		filename = "export.csv";
	}
	else
	{
		filename = argv[1];
	}
	create_csv(filename);
	printf("Tri à bulle en cours \n");
	for (int i = 0; i < 4; i++)
	{
		clock_t beginning, end;
		float sum = 0.0;
		for (int j = 0; j < 3; j++)
		{
			fillTab(tabs[i], sizes[i]);
			beginning = clock();
			bubblesort(tabs[i], sizes[i]);
			end = clock();
			float time_taken = (float)(end - beginning) / CLOCKS_PER_SEC;
			sum += time_taken;
		}
		averages[i] = sum / 3.0;
		export_csv(filename, "Bulle", sizes[i], averages[i]);
	}

	printf("Tri par tas en cours \n");
	for (int i = 0; i < 4; i++)
	{
		clock_t beginning, end;
		float sum = 0.0;
		for (int j = 0; j < 3; j++)
		{
			fillTab(tabs[i], sizes[i]);
			beginning = clock();
			heapSort(tabs[i], sizes[i]);
			end = clock();
			float time_taken = (float)(end - beginning) / CLOCKS_PER_SEC;
			sum += time_taken;
		}
		averages[i] = sum / 3.0;
		export_csv(filename, "Tas", sizes[i], averages[i]);
	}

	printf("Tri par selection en cours \n");
	for (int i = 0; i < 4; i++)
	{
		clock_t beginning, end;
		float sum = 0.0;
		for (int j = 0; j < 3; j++)
		{
			fillTab(tabs[i], sizes[i]);
			beginning = clock();
			selection(tabs[i], sizes[i]);
			end = clock();
			float time_taken = (float)(end - beginning) / CLOCKS_PER_SEC;
			sum += time_taken;
		}
		averages[i] = sum / 3.0;
		export_csv(filename, "Selection", sizes[i], averages[i]);
	}

	printf("Tri par insertion en cours \n");
	for (int i = 0; i < 4; i++)
	{
		clock_t beginning, end;
		float sum = 0.0;
		for (int j = 0; j < 3; j++)
		{
			fillTab(tabs[i], sizes[i]);
			beginning = clock();
			insertion(tabs[i], sizes[i]);
			end = clock();
			float time_taken = (float)(end - beginning) / CLOCKS_PER_SEC;
			sum += time_taken;
		}
		averages[i] = sum / 3.0;
		export_csv(filename, "Insertion", sizes[i], averages[i]);
	}

	return (0);
}