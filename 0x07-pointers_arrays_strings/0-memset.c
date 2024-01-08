#include "main.h"

/**
 *_memset - fill the memory
 *@s: the variable we are changing
 *@b: the constant we are convcerting to
 *@n: the value 
 *Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	_memset(s , b , sizeof(unsigned int)*n);
	return (s);
}
