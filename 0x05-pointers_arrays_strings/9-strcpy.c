#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copiar el contenido de uno a otra variable
 * @dest: destination
 * @src: source
 *Return: return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
