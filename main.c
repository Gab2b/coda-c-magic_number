#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int nombre_choisi;
	srand(time(NULL));
	int nombre_random = rand() % 100 + 1;

	while (nombre_choisi != nombre_random)
	{
		printf("Choisissez un nombre entre 1 et 100 :\n- ");
		scanf("%d", &nombre_choisi);
		if (0<nombre_choisi && nombre_choisi<=100)
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
		else
		{
			printf("Votre nombre n'est pas entre 1 et 100\n");
		}
	}

	printf("Bien joué vous avez trouvé le nombre magique vous avez gagné !\n\n");

	return 0;
}
