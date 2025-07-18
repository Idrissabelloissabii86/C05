#include <stdio.h>

int main() {
    int n;

    // Lire le nombre d'éléments
    
    scanf("%d", &n);

    int tableau[n];

    // Lire les éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Trouver le minimum
    int min = tableau[0];
    for (int i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    // Afficher le minimum
    printf("Le minimum est : %d\n", min);

    return 0;
}
