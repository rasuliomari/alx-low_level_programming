#include "main.h"

/**
 * set_bit - This function sets a bit at given index to 1
 *
 * @n: number to set bit in
 * @index: index to set bit at
 * Return: returns 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int X;

	if (index > 63)
		return (-1);

	X = 1 << index;
	*n = (*n | X);

	return (1);
}
