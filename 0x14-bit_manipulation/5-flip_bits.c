#include "main.h"
/**
 *flip_bits - ...
 *@m: ...
 *@n: ...
 *Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int y = 0;

	while (x != 0)
	{
		y += x & 1;
		x >>= 1;
	}
	return (y);
}
