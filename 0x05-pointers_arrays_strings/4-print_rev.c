#include <stdio.h>
#include "main.h"

/**
 *print_rev - prints s reverse of a string
 *@s: string to be reversed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
