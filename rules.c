#include "tic-tac-toe.h"

// affiche la grille dans le terminal
void afficher_plateau(char plateau[9]) {
    printf("\n");
    printf(" %c | %c | %c \n", plateau[0], plateau[1], plateau[2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", plateau[3], plateau[4], plateau[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", plateau[6], plateau[7], plateau[8]);
    printf("\n");
}

// verifie si le joueur a gagne
int verifier_victoire(char p[9], char s) {
    if ((p[0] == s && p[1] == s && p[2] == s) ||
        (p[3] == s && p[4] == s && p[5] == s) ||
        (p[6] == s && p[7] == s && p[8] == s) ||
        (p[0] == s && p[3] == s && p[6] == s) ||
        (p[1] == s && p[4] == s && p[7] == s) ||
        (p[2] == s && p[5] == s && p[8] == s) ||
        (p[0] == s && p[4] == s && p[8] == s) ||
        (p[2] == s && p[4] == s && p[6] == s)) {
        return 1;
    }
    return 0;
}

// verifie s'il reste des cases libres
int plateau_plein(char plateau[9]) {
    for (int i = 0; i < 9; i++) {
        if (plateau[i] != 'X' && plateau[i] != 'O') {
            return 0;
        }
    }
    return 1;
}
