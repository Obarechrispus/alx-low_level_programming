#include "main.h"
/**
 *binary_to_uint - ....
 *@b: ....
 *
 *Return: ....
 */
unsigned int binary_to_uint(const char *b)
{
	int number = 0;

	while (*b != '\0')
	{
		if (b == NULL)
		return (0);
		if (*b != '0' && *b != '1')
		return (0);
	number = (number << 1) + (*b - '0');
	b++;
	}
	return (number);
}
