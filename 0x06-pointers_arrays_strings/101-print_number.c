#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int myInt = n;

	if (n < 0)
	{
		_putchar('-');
		myInt = -n;
	}

	if (myInt / 10 != 0)
	{
		print_number(myInt / 10);
	}
	_putchar((myInt % 10) + '0');
}
