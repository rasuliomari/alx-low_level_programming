#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @result: a pointer to a string
 *
 * Return: result
 */
char *cap_string(char *result)
{
	int count;

	/*  scan through string */
	count = 0;
	while (result[count] != '\0')
	{
		/* if next character after count is a char , capitalise it */
		if (result[0] >= 97 && result[0] <= 122)
		{
			result[0] = result[0] - 32;
		}
		if (result[count] == ' ' || result[count] == '\t' || result[count] == '\n'
		    || result[count] == ',' || result[count] == ';' || result[count] == '.'
		    || result[count] == '.' || result[count] == '!' || result[count] == '?'
		    || result[count] == '"' || result[count] == '(' || result[count] == ')'
		    || result[count] == '{' || result[count] == '}')
		{
			if (result[count + 1] >= 97 && result[count + 1] <= 122)
			{
				result[count + 1] = result[count + 1] - 32;
			}
		}
		count++;
	}
	return (result);
}
