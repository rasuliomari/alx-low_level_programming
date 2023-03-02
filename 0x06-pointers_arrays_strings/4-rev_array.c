#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int count, temp;

	count = 0;
	n--;
	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
