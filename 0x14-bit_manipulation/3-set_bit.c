#include "main.h"
/**
 *set_bit - ...
 *@n: ...
 *@index: ...
 *
 *Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= x;
	return (1);
}
