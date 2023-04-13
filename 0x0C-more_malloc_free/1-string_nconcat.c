#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat-function that concatenates two strings.
 *@s1:string 1
 *@s2:string 2
 *@n:size 
 *Return:pointer which contains 2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	size_t length_of_s1 = strlen(s1);
	size_t length_of_s2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= length_of_s2)
		n = length_of_s2;
	ptr = malloc(length_of_s1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < length_of_s1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (n < length_of_s2 && i < (length_of_s2 + n))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
