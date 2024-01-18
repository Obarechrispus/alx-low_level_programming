#include "main.h"
/**
 *malloc_checked - allocates memory
 *@b: the number of bytes
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr =  malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
	return (ptr);
}
