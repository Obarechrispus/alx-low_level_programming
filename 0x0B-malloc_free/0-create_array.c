#include "main.h"

/**
 *create_array - the program
 *@size: gives the size
 *@c: gets the character
 *Return: null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
		return (NULL);
	y = malloc(size * sizeof(char));
	if (y == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}
