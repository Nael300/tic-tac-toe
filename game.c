#include "tic-tac-toe.h"

// gere le tour du joueur
void tour_joueur(char plateau[9]) {
    int choix;

    while (1) {
        printf("Votre tour (case 0 a 8) : ");
        scanf("%d", &choix);

        // verifie si la case est valide et libre
        if (choix >= 0 && choix <= 8 && plateau[choix] != 'X' && plateau[choix] != 'O') {
            plateau[choix] = 'X';
            break;
        } else {
            printf("coup invalide, reessaie\n");
        }
    }
}

// tour de l'ordinateur (prend la premiere case disponible)
void tour_ordinateur(char plateau[9]) {
    printf("tour de l'ordinateur...\n");

    for (int i = 0; i < 9; i++) {
        if (plateau[i] != 'X' && plateau[i] != 'O') {
            plateau[i] = 'O';
            break;
        }
    }
}
