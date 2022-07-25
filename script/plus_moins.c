#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
int plus_moins(int valeur_a_trouver, int choix_joueur,int mode)
{
    int count1=26;
    int count2=11;
    int count3=100000;
     switch (mode)
    {
        case 1:
        {
            for (i=1;i<50;i++)
            {
                count3--;

                if (valeur_a_trouver < choix_joueur)
                {
                    printf("   Moins\n\n");
                }
                else if (valeur_a_trouver > choix_joueur)
                {
                    printf("   Plus\n\n");
                }
                if(valeur_a_trouver == choix_joueur)
                {
                   printf("   Bingo! Vous avez gagne \n\n");
                   exit(1);
                }
               printf("   Entrer un autre chiffre: ");
               scanf("%d",&choix_joueur);
            }
        }
    }
     switch (mode)
    {
        case 2:
        {
            for (i=0;i<26;i++)
            {
                count1--;

                if (valeur_a_trouver < choix_joueur)
                {
                    printf("   Il vous reste %d essaie(s)\n",count1);
                    printf("   Moins\n\n");
                }
                else if (valeur_a_trouver > choix_joueur)
                {
                    printf("   Il vous reste  %d essaie(s)\n",count1);
                    printf("   Plus\n\n");
                }
                if(valeur_a_trouver == choix_joueur)
                {
                   printf("   Bingo! Vous avez gagne \n\n");
                   exit(1);
                }
               printf("   Entrer un autre chiffre: ");
               scanf("%d",&choix_joueur);
            }
        }
    }
       switch (mode)
    {
        case 3:
        {
            for (i=1;i<11;i++)
            {
                count2--;

                if (valeur_a_trouver < choix_joueur)
                    {
                        printf("   Il vous reste %d essaie(s) \n",count2);
                        printf("   Moins\n\n");
                    }
                else if (valeur_a_trouver > choix_joueur)
                {
                    printf("   Il vous reste  %d essaie(s) \n",count2);
                   printf("   Plus\n\n");
                }
                if(valeur_a_trouver == choix_joueur)
                {
                   printf("   Bingo! Vous avez gagne\n\n");
                   exit(1);
                }
                printf("   Entrer un autre chiffre: ");
                scanf("%d",&choix_joueur);
            }

        break;
        }

    }


}
int main()
{
    int valeur,choix,mode;
    srand(time(NULL));
    valeur=rand()%100;
    printf("\n\n          Mode pricipale \n");
    printf("   1/ Facile     2/Moyen    3/Difficile \n\n");
    printf("          Entrer le mode:  ");
    scanf("%d",&mode);
    printf("\n   Choisissez une chiffre : ");
    scanf("%d",&choix); 
    plus_moins(valeur,choix,mode);
}
