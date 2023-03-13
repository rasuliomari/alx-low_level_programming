#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int r, n, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (r  = 0; r  < ac; r++)
	{
		for (n = 0; av[r][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (r = 0; r < ac; r++)
	{
		for (n = 0; av[r][n]; n++)
		{
			str[k] = av[r][n];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
