#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int i,j,valeur,choix,mode;
int count1=25,count2=10,count3=100000;
int choix,coup,play1,play2,score=0,tour;

int player2()
{
    printf("\n\n     Mode 2 joueurs \n");
    play1=1;
    play2=2;
    printf("   Le nombre de tour que vous souhaitez jouer : ");
    scanf("%d",&tour);
    for (j=1;j<tour+1;j++)
    {
        printf("\n    Joueur  n_0%d est maitre de jeux, veuillez precisez le nombre de tentative(s) : ",play1);
    	scanf("%d",&coup);
    	printf("  Joueur n_0%d, quel est votre choix: ",play2);
    	scanf("%d",&choix);
    	int count=coup;
    	for (i=0;i<coup;i++)
        {
                count--;
                if (valeur < choix)
        		{
        		    printf("   Moins\n");
        		    printf("   Il vous reste %d tentative(s)\n\n",count);
        		}
        		else if (valeur > choix)
       			{
       			    printf("   Plus\n");
        		    printf("   Il vous reste %d tentative(s)\n\n",count);
        		}
        		score=coup-i;
    			if(count==0)
    		    {
        		    printf("   Le joueur n_0%d a obtenu une score de  %d point(s)\n",play2,score);
        		    int temp=play1;
        		    play1=play2;
        		    play2=temp;
        		    srand(time(NULL));
    			    valeur=rand()%100;
    			    printf("%d",valeur);
    			    exit(0);
        		    break;
        		}
    			if (valeur == choix)
    		    {
        		    printf("   Bingo \n\n");
        		    printf("    Le joueur n_0%d, a obtenu une score  %d point(s)\n\n",play2,score);
        		    int temp=play1;
        		    play1=play2;
            		    play2=temp;
            		    srand(time(NULL));
   		            valeur=rand()%100;
       				break;
        		}
        	    printf("   Choisir un autre chiffre: ");
   				 scanf("%d",&choix);
        }
    }
}


int plus_moins(int valeur_a_trouver, int choix_joueur,char mode)
{

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
                   printf("   Bingo!\n\n");
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
            for (i=1;i<26;i++)
            {
                count1--;

                if (valeur_a_trouver < choix_joueur)
                {
                    printf("   Il vous reste  %d tentative(s)\n",count1);
                    printf("   Moins\n\n");
                }
                else if (valeur_a_trouver > choix_joueur)
                {
                    printf("   Il vous reste  %d tentative(s)\n",count1);
                    printf("   Plus\n\n");
                }
                if(valeur_a_trouver == choix_joueur)
                {
                   printf("   Bingo!\n\n");
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
                    printf("   Il vous reste %d essaie(s) \n",count2);
                   printf("   Plus\n\n");
                }
                if(valeur_a_trouver == choix_joueur)
                {
                   printf("   Bingo!\n\n");
                   exit(1);
                }
                printf("   Entrer un autre chiffre: ");
                scanf("%d",&choix_joueur);
            }
	}	
    }
}
void chiffre()
{
    printf("\n\n Mode un joueur");
    printf("\n   Choisissez un chiffre : ");
    scanf("%d",&choix); 
    plus_moins(valeur,choix,mode);
}

void mod()
{
    srand(time(NULL));
    valeur=rand()%100;
    printf("   Mission de mode \n");
    printf(" 1/ Facile     2/Moyen    3/ Difficile\n\n");
    printf("   Entrer le mode:  ");
    scanf("%d",&mode);
    if (mode==1 || mode==2 || mode==3)
    {

        chiffre();
    }
    else 
    {
    	printf("  Erreur, veuillez choisir entre les 3 choix \n\n");
    	mod();
	} 
}


int main()
{
    int joueur;
    printf("\n\n   JEU PLUS OU MOINS\n");
    printf("  1/ 1 joueur     2/ 2 joueurs\n\n");
    printf("   Taper votre choix : ");
    scanf("%d",&joueur);
    if (joueur==1)
    { 
       mod(); 
    }
    if (joueur==2)
    {
    	player2();
	}
    else 
    {
    	printf("   Erreur, veuillez choisir entre les 2 choix \n\n");
        main();
    } 
}
