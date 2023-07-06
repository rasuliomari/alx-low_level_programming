#include "main.h"

/**
 * get_bit - This function gets a bit at index
 *
 * @n: number to get bit from
 * @index: index where the bit get at
 * Return: value of bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int numVal;

	if (index > 63)
		return (-1);

	numVal = (n >> index) & 1;

	return (numVal);
}
