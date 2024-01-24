#include "function_pointers.h"

/**
 *array_iterator - entry
 *@array: contains or stores the array
 *@size: the size of the array
 *@action: execute the array
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
					i++;
		}
	}
}

