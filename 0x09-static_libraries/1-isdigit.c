#include "main.h"
#include <stdio.h>

/**
 *_isdigit-checks for a digit(0 through 9).
 * @c:the character being checked
 *
 * Return:1-successful.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
