#include "main.h"

/**
 * create_file - This function creates a file
 *
 * @filename: filename to create
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created.
 */

int create_file(const char *filename, char *text_content)
{
	int fx, fy, length;

	if (filename == NULL)
		return (-1);

	fx = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fx < 0)
		return (-1);

	length = 0;
	while (text_content && *(text_content + length))
		length++;

	fy = write(fx, text_content, length);
	close(fx);
	if (fy < 0)
		return (-1);

	return (1);
}
