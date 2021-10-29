# Benchme  

## Description  
Ce programme permet de réaliser des benchmarks des différents algorithmes de tri (tri à bulle, par sélection, par insertion et par tas).
Chaque algorithme est testé 3 fois avec les tailles de tableaux suivantes:
- 10²
- 10<sup>3</sup>
- 10<sup>4</sup>
- 10<sup>5</sup>

Les algorithmes ne sont pas testés pour 10<sup>6</sup> et 10<sup>7</sup> pour des raisons de temps d'exécution (plusieurs dizaines de minutes pour certains tris).  
Le programme génère un fichier CSV contenant les temps moyen d'exécution pour chaque algorithme selon la taille des tableaux utilisés.

## Documentation  

### Conception
La documentation est réalisée à l'aide de doxygen. 
Les différents paramètres liés à la génération de la documentation sont décrits dans le Makefile.  

### Génération  

Pour générer la documentation:  
`make doc`  
Un dossier html est alors généré à la racine du projet. Il contient un fichier index.html qui permet d'accéder à la documentation.

## Exécution du projet
Il d'abord nécessaire compiler le projet avec la commande suivante:  
`make`  
Une fichier nommé benchme est créé dans le dossier output.  
Pour l'exécuter:  
```bash
cd output
./benchme nom_fichier.csv
```
Si aucun nom de fichier n'est passé en argument le fichier sera nommé par défaut export.csv.  
Le fichier csv est créé dans le dossier output.

