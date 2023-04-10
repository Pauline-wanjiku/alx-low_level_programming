#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main-Adds positive number
 *@argc:argument count
 *@argv:argument array
 *Return:Error if number is not digit else 1
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	k = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		k += atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
