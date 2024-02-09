#include "main.h"
/**
 *clear_bit - /...
 *@n: ...
 *@index: ...
 *
 *Return: ....
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= x;
	return (1);
}
