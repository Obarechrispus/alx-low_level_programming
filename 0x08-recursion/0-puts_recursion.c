#include "main.h"

/**
 *_puts_recursion - the function
 *@s: describes
 *Return: Gives a null return
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
