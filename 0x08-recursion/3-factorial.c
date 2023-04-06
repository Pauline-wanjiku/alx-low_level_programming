#include "main.h"

/**
 * factorial - Returns  factorial of a given number.
 * @n: The input value.
 *
 * Return: factorial of a n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
