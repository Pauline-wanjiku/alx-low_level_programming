#include <stdlib.h>
#include "main.h"

/**
 *create_array- creates an array of chars initializes specific char.
 *@size:size of array
 *@c:specified char
 *Return:null size=0,pointer array=1 NULL=0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
