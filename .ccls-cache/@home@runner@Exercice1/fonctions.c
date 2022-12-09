#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

affichercarte(carte Ma_carte) {
  switch (Ma_carte.valeur) {
  case 1:
    printf("7");
    break;
  case 2:
    printf("8");
    break;
  case 3:
    printf("9");
    break;
  case 4:
    printf("10");
    break;
  case 5:
    printf("Valet");
    break;
  case 6:
    printf("Dame");
    break;
  case 7:
    printf("Roi");
    break;
  case 8:
    printf("As");
    break;
  }
  printf(" de ");

  switch (Ma_carte.couleur) {
  case 1:
    printf("Pique");
    break;
  case 2:
    printf("Coeur");
    break;
  case 3:
    printf("Carreau");
    break;
  case 4:
    printf("Trefle");
    break;
  }
}

carte drawcard(void) {
  // initialisation du générateur aléatoire
  int couleur;
  carte Ma_carte;
  couleur =
      (rand() % 4) +
      1; //  rand() permet de générer un nombre aléatoire et % est le modulo
  Ma_carte.couleur = couleur;
  int valeur;
  valeur = (rand() % 8) + 1;
  Ma_carte.valeur = valeur;
  return Ma_carte;
}
