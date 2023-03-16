#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: Pointer to the allocated memory
 * On malloc failure, null is returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *v;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	v = malloc(nmemb * size);
	if (v == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		*((char *)(v) + j) = 0;
	return (v);
}
