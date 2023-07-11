#include "main.h"

/**
 * create_buffer - This function allocates 1024 bytes
 * for a buffer.
 *
 * @file: file buffer is storing chars.
 * Return: newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *new_buf;

	new_buf = malloc(sizeof(char) * 1024);

	if (new_buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (new_buf);
}

/**
 * close_file - This function closes file descriptors.
 *
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int charC;

	charC = close(fd);

	if (charC == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This copies contents of a file to another file.
 *
 * @argc: arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: (Always) 0 on success.
 */
int main(int argc, char *argv[])
{
	int x_from, X_to, x, y;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	x_from = open(argv[1], O_RDONLY);
	x = read(x_from, buf, 1024);
	X_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (x_from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		y = write(X_to, buf, x);
		if (X_to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		x = read(x_from, buf, 1024);
		X_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);
	free(buf);
	close_file(x_from);
	close_file(X_to);
	return (0);
}
