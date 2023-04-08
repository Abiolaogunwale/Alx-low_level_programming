#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and print it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0
 *	   0/w - the actual nummber of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t r;
	ssize_t	w;
	char *buffer;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(o);
	return (w);
}
