#include "main.h"
#include <stdio.h>

/**
 *_stricat- check the code
 *@*dest:checks the code
 *@*src:checks the code
 *@n: checks 
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0,b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
	       dest[b++] = src [a];	
	return (dest);
}
