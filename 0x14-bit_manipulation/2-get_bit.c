#include "main.h"
/**
 * get_bit - ....
 *@index: ....
 *@n: ...
 *
 *
 *
 *
 *Return: the index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1UL << index;
	unsigned long int w = ((n & x) ? 1 : 0);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (w);
}
