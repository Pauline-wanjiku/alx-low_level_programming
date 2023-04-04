#include "main.h"
#include <stdio.h>

/**
 *_memset -  function that fills memory with a constant byte.
 *@s :pointer pointing the n bytes of memory
 *@n :number of bytes
 *@b : constant byte
 *Return: a pointer to the memory area s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		i++;
		s[i] = b;
	}
	return (s);
}
