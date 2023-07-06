#include "main.h"

/**
 * clear_bit - This function sets the value of a given bit to 0
 *
 * @n: number to change
 * @index: index of a bit to clear
 * Return: returns 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);

}
