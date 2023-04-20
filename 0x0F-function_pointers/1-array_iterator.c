#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator-function that executes a function given as a parameter.
 *@array:the array provided
 *@size: size of the array
 *@action:pointer to the function you need to use
 *Return:Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*fun)(int);

	fun = action;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		fun(array[i]);
	}
}
