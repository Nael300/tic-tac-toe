#include "tic-tac-toe.h"

// affichage de la grille dans le terminal
void afficher_plateau(char plateau[9]) {
    printf("\n");
    printf(" %c | %c | %c \n", plateau[0], plateau[1], plateau[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", plateau[3], plateau[4], plateau[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", plateau[6], plateau[7], plateau[8]);
    printf("\n");
}

int main() {
    // initialise le plateau avec les numeros de cases de 0 a 8
    char plateau[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    int tours = 0;

    printf("=== BIENVENUE AU TIC-TAC-TOE ===\n");

    // boucle principale de la partie
    while (tours < 9) {
        afficher_plateau(plateau);

        // tour du joueur
        tour_joueur(plateau);
        tours++;

        // verifie si le joueur a gagne
        if (verifier_victoire(plateau) == 1) {
            afficher_plateau(plateau);
            printf("Felicitations, vous avez gagne !\n");
            break;
        }

        // verifie s'il y a match nul
        if (tours == 9) {
            afficher_plateau(plateau);
            printf("Match nul !\n");
            break;
        }

        // tour de l'ordinateur
        tour_ordinateur(plateau);
        tours++;

        // verifie si l'ordinateur a gagne
        if (verifier_victoire(plateau) == 1) {
            afficher_plateau(plateau);
            printf("L'ordinateur a gagne...\n");
            break;
        }
    }

    return 0;
}
