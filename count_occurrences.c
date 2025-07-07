#include <stdio.h>

int main() {
    int n;

    // Lecture de la taille du tableau
    scanf("%d", &n);
    int tableau[n];

    // Lecture des éléments du tableau
    for(int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    int recherche;
    // Lecture de l'élément à rechercher
    scanf("%d", &recherche);

    int compteur = 0;

    // Comptage des occurrences de l'élément
    for(int i = 0; i < n; i++) {
        if(tableau[i] == recherche) {
            compteur++;
        }
    }

    // Affichage du résultat
    printf("L'élément %d apparaît %d fois.\n", recherche, compteur);

    return 0;
}
