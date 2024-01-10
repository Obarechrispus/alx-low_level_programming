#include "main.h"
#include <string.h>

/**
 *_print_rev_recursion - reverses
 *@s: gets the charcter
 */

void _print_rev_recursion(char *s)
{
	int i;
	int length;

	length = strlen(s);
	for (i = 0;i <length; i++)
	{
		s[i] = s[length-i-1];
	}
}
