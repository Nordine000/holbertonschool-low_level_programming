#include "main.h"

/**
 * create_file - cree un fichier et ecris
 * @filename: nom
 * @text_content: texte du fichier
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
