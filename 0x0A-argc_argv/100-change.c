#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: number of command line arguments
 * @argv: array of the command line arguments
 *
 * Return: Always 0.
 * 1 on error
 */
int main(int argc, char *argv[])
{
	int change, num;

	change = 0;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num > 0)
		{
			for (; num >= 25; change++)
			{
				num = num - 25;
			}
			for (; num >= 10; change++)
			{
				num = num - 10;
			}
			for (; num >= 5; change++)
			{
				num = num - 5;
			}
			for (; num >= 2; change++)
			{
				num = num - 2;
			}
			for (; num >= 1; change++)
			{
				num = num - 1;
			}
		}
		printf("%d\n", change);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
