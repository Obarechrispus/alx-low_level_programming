#include "main.h"

/*
 *factorial - calculate the factorial
 *@n: the number
 *Return:
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
