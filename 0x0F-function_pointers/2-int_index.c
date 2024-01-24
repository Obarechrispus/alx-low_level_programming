#include "function_pointers.h"
/**
 * int_index - a function that checks a n interger
 *@array: where the int is stored
 *@size: the legnth ofthe int
 *@cmp: the checker
 *Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i <  size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
