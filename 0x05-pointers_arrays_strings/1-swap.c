#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers.
 *@a:value to be swaped
 * @b :value to be swaped with a
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
