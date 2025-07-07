#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau
    scanf("%d", &n1);
    int tab1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lecture de la taille du deuxième tableau
    scanf("%d", &n2);
    int tab2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    int intersection[n1 < n2 ? n1 : n2]; // Tableau pour stocker l'intersection
    int taille_inter = 0;

    // Comparaison croisée avec suppression des doublons
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j]) {
                // Vérifier si déjà présent dans l'intersection
                bool deja_present = false;
                for (int k = 0; k < taille_inter; k++) {
                    if (intersection[k] == tab1[i]) {
                        deja_present = true;
                        break;
                    }
                }

                // Si pas encore présent, on l'ajoute
                if (!deja_present) {
                    intersection[taille_inter] = tab1[i];
                    taille_inter++;
                }
            }
        }
    }

    // Affichage du résultat
    printf("Intersection : ");
    for (int i = 0; i < taille_inter; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");

    return 0;
}
