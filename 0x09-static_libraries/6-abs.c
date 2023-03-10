#include "main.h"

/**
 * _abs - compute absolute value
 * @n: integer to compute
 *
 * Description: Using a unary operator, _abs returns
 * absolute value of a given integer.
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
