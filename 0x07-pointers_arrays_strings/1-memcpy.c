#include "main.h"

/**
 *_memcpy - copiest data
 *@dest: memory adress
 *@src: memory
 *@n: by what number
 *Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
