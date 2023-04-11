#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings.
 *@s1: string 1
 *@s2:string2
 *Return: null on fail
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int s1Length = 0;
	unsigned int s2Length = 0;
	unsigned int s3Length;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Length = 0;
	while (s1[s1Length])
		s1Length++;
	while (s2[s2Length])
		s2Length++;
	s3Length = s1Length + s2Length;
	s3 = malloc(sizeof(char) * s3Length + 1);
	if (s3 == NULL)
		return (NULL);
	while (i < s1Length)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i <= s3Length)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
