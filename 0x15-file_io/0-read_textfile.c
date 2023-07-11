#include "main.h"

/**
 * read_textfile- This function read text and file print to STDOUT.
 *
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *size;
	ssize_t x, y, z;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);

	size = malloc(sizeof(char) * letters);
	z = read(x, size, letters);
	y = write(STDOUT_FILENO, size, z);

	free(size);
	close(x);
	return (y);
}
