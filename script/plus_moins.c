#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int plus_moins(int valeur_a_trouver, int choix_joueur)
{
    while (valeur_a_trouver != choix_joueur)
    {
        if (valeur_a_trouver < choix_joueur)
        {
            printf("    Moins\n");
        }
        else if (valeur_a_trouver > choix_joueur)
        {
           printf("    Plus\n");
        }
        printf("   Entrer un autre chiffre: ");
        scanf("%d",&choix_joueur);
    }
    if(valeur_a_trouver == choix_joueur)
    {
        printf("    Bingo!, felicitation, vous avez gagne\n");
    }

}
int main()
{
    int valeur,choix;
    srand(time(NULL));
    valeur=rand()%100;
    printf("   La valeur est %d\n",valeur);
    printf("   Choisissez une chiffre : ");
    scanf("%d",&choix);
    plus_moins(valeur,choix);
}
