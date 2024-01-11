#include "main.h"

/**
 *_pow_recursion - return exponents
 *@y: num1
 *@x: num2
 *Return: value
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	else
	z = (x * _pow_recursion(x, y - 1));
	return (z);
}
