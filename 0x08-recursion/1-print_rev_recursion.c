#include "main.h"
#include <string.h>

/**
 *_print_rev_recursion - reverses
 *@s: gets the charcter
 */

void _print_rev_recursion(char *s)
{
	if (s* == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
