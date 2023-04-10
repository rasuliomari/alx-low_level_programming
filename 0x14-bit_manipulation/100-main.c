#include <stdio.h>
#include "main.h"

/**
 * main - main entry point
 *
 * Return: 0 Always.
 */

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}

	return (0);
}
