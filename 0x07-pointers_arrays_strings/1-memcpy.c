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
	_memcpy(dest, src, sizeof(unsigned int) * n);
	return (dest);
}
