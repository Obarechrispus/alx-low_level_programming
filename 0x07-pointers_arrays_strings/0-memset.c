#include "main.h"
#include <string.h>
/**
 *_memset - fill the memory
 *@s: the variable we are changing
 *@b: the constant we are convcerting to
 *@n: the value
 *Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = strlen(s);

	for (n = 0; n < i; n++)
	{
		s[n] = b;
	}
	return (s);
}
