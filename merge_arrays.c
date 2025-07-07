#include <stdio.h>

int main() {
    int n1, n2;

    // Lecture de la taille du premier tableau
    scanf("%d", &n1);
    int tableau1[n1];

    // Lecture des éléments du premier tableau
    for(int i = 0; i < n1; i++) {
        scanf("%d", &tableau1[i]);
    }

    // Lecture de la taille du deuxième tableau
    scanf("%d", &n2);
    int tableau2[n2];

    // Lecture des éléments du deuxième tableau
    for(int i = 0; i < n2; i++) {
        scanf("%d", &tableau2[i]);
    }

    // Création du tableau fusionné de taille n1 + n2
    int fusion[n1 + n2];

    // Copie des éléments du premier tableau
    for(int i = 0; i < n1; i++) {
        fusion[i] = tableau1[i];
    }

    // Copie des éléments du deuxième tableau
    for(int i = 0; i < n2; i++) {
        fusion[n1 + i] = tableau2[i];
    }

    // Affichage du tableau fusionné
    printf("Tableau fusionné : ");
    for(int i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);
    }

    printf("\n");
    return 0;
}
