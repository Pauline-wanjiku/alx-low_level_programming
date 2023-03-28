#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverse a string
 *@s :string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int a, len;
	char *begin, *end = s;
	char x;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		end++;
	}
	len = a + 1;
	begin = s;
	for (a = 0; a < len / 2; a++)
	{
		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
