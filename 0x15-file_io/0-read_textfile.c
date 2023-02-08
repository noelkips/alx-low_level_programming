#include "main.h"

/**
 * read_textfile- reads text file and prints it to POSIX stdout
 *
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 * or 0 (ERROR)
 */

size_t read_textfile(const char *filename, size_t letters)
{
	size_t fd_o, fd_r, fd_w, n;
	char *ptr;

	n = 0;
	ptr = malloc(letters * sizeof(char));

	if (filename == NULL || ptr == NULL)
		return (0);
	fd_o = open(filename, O_RDONLY);
	fd_r = read(fd_o, ptr, letters);
	fd_w = write(STDOUT_FILENO, ptr, fd_r);
	if (fd_o < n || fd_r < n || fd_w < n || fd_w != fd_r)
	{
		return (0);
	}
	free(ptr);
	close(fd_o);
	return (fd_w);
}

