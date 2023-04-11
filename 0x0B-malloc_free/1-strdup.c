#include <stdlib.h>
#include "main.h"

/**
 *_strdup - returns a pointer to new string which is duplicate of the string
 *@str:string to be duplicated
 *Return:Null if str=NULL,pointter=1 Null=0
 *
 */

char *_strdup(char *str)
{
	char *dup_string;

	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; str[i] != '\0'; i++)
	dup_string = (char *)malloc((i + 1) * sizeof(char));

	if (dup_string == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
		*(dup_string + j) = str[j];
	return (dup_string);
}
