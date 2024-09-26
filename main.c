///Inclusion des librairies requises

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction main

int main(int argc, char *argv[])
{
	// Initialisation des variables et message d'accueil

	int nombre_choisi;

	srand(time(NULL));
	int nombre_random = rand() % 100 + 1;

	printf("\n╟     Bienvenue au jeu du nombre mystère,    ╣\n╟ devinez le numéro magique entre 1 et 100 ! ╣\n");


	// Boucle principale du jeu

	while (nombre_choisi != nombre_random)
	{
		// Affichage et Saisie du nombre de l'utilisateur

		printf("\nChoisissez un nombre entre 1 et 100 :\n- ");
		scanf("%d", &nombre_choisi);


		// Comparaison du nombre de l'utilisateur et de l'ordinateur

		if (0 < nombre_choisi && nombre_choisi <= 100)
		{
			if (nombre_choisi<nombre_random)
			{
				printf("C'est plus !\n\n");
			}
			else if (nombre_choisi>nombre_random)
			{
				printf("C'est moins !\n\n");
			}
		}

		// Gestion des potentielles erreurs

		else
		{
			printf("Votre nombre n'est pas un entier entre 1 et 100\n");
		}
	}

	// Fin du jeu et du programme

	printf("\n★★★ Bravo! Vous avez trouvé le nombre magique et gagné ! ★★★\n\n");

	return 0;
}