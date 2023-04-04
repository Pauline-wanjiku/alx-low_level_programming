#include <stdio.h>
#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest : destination memory area
 *@src : source memory area
 * @n : size of memory
 *Return :  pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}	
