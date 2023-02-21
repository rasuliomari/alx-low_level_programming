#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number to be counted from
 * Description: prints numbers from user input
 * to 98.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
