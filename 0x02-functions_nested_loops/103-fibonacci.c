#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 * Description: computes and prints even numbers < 4,000,000
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long numx;
	unsigned long sum = 0;

	for (i = 0; i <= 31; i++)
	{
		if (num1 % 2 == 0)
		{
			sum += num1;
		}

		numx = num1 + num2;
		num1 = num2;
		num2 = numx;
	}

	printf("%lu\n", sum);

	return (0);
}
