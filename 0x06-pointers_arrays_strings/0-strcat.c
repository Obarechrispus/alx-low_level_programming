#include "main.h"
#include <stdio.h>

/**
 *_stricat- check the code
 *@*dest:checks the code
 *@*src:checks the code
 *@n: checks 
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0,b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
	       dest[a] = src [a];
		a++;
		b++;
	}
	dest [a] = '\0';	
	return (dest);
}
