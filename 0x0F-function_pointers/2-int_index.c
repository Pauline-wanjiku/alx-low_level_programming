#include "function_pointers.h"

/**
 *int_index- function that searches for an integer.
 *@array:array given
 *@size:number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *@int_index: returns the index of the first element
 *Return:-1 if no element match, size <= 0, return -1
 *int_index returns the index[0]
 *cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*pn)(int);

	pn = cmp;

	if (size <= 0)
	{
		return (-1);
	}

	if (!array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (pn(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
