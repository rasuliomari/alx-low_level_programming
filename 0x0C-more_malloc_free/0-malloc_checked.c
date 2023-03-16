#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: length
 *
 * Return: a pointed to the allocated memory
 * on failure, 98 is returned
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);
	return (r);
}
