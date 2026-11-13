#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

// Bibliothèques standard
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Prototypes des fonctions du projet
void afficher_plateau(char plateau[9]);
int verifier_victoire(char plateau[9], char symbole);
int plateau_plein(char plateau[9]);
void tour_joueur(char plateau[9]);
void tour_ordinateur(char plateau[9]);

#endif
