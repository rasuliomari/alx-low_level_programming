#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array && cmp)
	{
		for (r = 0; r < size; r++)
		{
			if (cmp(array[r]) != 0)
				return (r);
		}
	}

	return (-1);
}
