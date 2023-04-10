#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main-multiplies two numbers
 *@argc:argument count
 *@argv:argument array
 *Return: Error if no arguments else 1
 */

int main(int argc, char *argv[])
{
	int i, j, multi;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	multi = i * j;
	printf("%i\n", multi);
	return (0);
}
