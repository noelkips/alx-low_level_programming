#include "main.h"

/**
 * create_file- creates a file
 *
 * @filename: name of the file to create
 * @text_content: null terminated string to write
 * Return: 1 (Success)
 * or -1 (ERROR)
 */

int create_file(const char *filename, char *text_content)
{
	int fd_o, fd_w;
	int letters = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[letters])
			letters++;
	}
	fd_o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fd_w = write(fd_o, text_content, letters);
	if (fd_o == -1 || fd_w == -1)
	{
		return (-1);
	}
	close(fd_o);
	return (1);
}

