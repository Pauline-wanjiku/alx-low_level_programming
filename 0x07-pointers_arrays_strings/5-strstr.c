#include "main.h"

/**
 *_strstr-locates a substring.
 *@haystack:substring
 *@needle:string
 *Return:pointer to the beginning of the located substring /NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *f = needle;

		while (*s == *f && *f != '\0')
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
