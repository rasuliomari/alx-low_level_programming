#include "main.h"

/**
 * print_binary - This function prints binary
 * of a decimal number
 *
 * @n: number prints in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int num, countNum = 0;
	unsigned long int currentNum;

	num = 63;
	for (; num >= 0; num--)
	{
		currentNum = n >> num;

		if (currentNum & 1)
		{
			_putchar('1');
			countNum++;
		}
		else if (countNum)
			_putchar('0');
	}

	if (!countNum)
		_putchar('0');
}
