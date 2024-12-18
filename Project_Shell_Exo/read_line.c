#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char *line = NULL;
	size_t taille = 0;
	ssize_t lire;

	while (1)
	{
		printf("$ "); 
		lire = getline(&line, &taille, stdin);
		if (lire == -1)
		{
			break;
		}
		printf("%s", line);
	}
	free(line);
	return (0);
}
