#include "main.h"

/**
 * append_text_to_file - This function appends
 * text at the end of a file.
 *
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 * Return: If fails or filename is NULL - -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdx, fdy, lenX = 0;

	if (filename == NULL)
		return (-1);

	fdx = open(filename, O_RDWR | O_APPEND);
	if (fdx < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fdx);
		return (1);
	}

	while (*(text_content + lenX))
		lenX++;

	fdy = write(fdx, text_content, lenX);
	close(fdx);
	if (fdy < 0)
		return (-1);

	return (1);
}
