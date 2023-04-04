#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strchr -  function that locates a character in a string.
 *@s:the string
 *@c:the character
 *Return:pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
