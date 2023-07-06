#include "main.h"

/**
 * get_endianness - This function checks endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int n;
	char *c = (char *)&n;

	n = 1;
	if (*c)
		return (1);

	return (0);
}
