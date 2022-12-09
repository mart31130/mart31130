#include "fonctions.h"
#include "type.h"
#include <stdio.h>
#include <time.h>

int main(void) {
  /*carte Ma_carte;
  printf("choisir une couleur:\n");
  scanf("%d",&(Ma_carte.couleur));

  printf("choisir une valeur:\n");
  scanf("%d",&(Ma_carte.valeur));
    affichercarte(Ma_carte);*/

  srand(time(NULL));
  for (int i = 0; i < 5; i++) {
    affichercarte(drawcard());
    printf("\n");
  }

  return 0;
}
