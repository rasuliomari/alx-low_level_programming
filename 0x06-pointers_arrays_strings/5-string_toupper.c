#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @result: pointer to a string
 *
 * Return: result
 */
char *string_toupper(char *result)
{
	int len_string;

	len_string = 0;
	while (result[len_string] != '\0')
	{
		if (result[len_string] >= 97 && result[len_string] <= 122)
			result[len_string] = result[len_string] - 32;
		len_string++;
	}
	return (result);
}
