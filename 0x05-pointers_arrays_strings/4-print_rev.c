#include "main.h"
#include <stdio.h>
/**
 * Entry point: void print_rev(char *s);
 * . I can only go one way. I've not got a reverse gear
 * Return (0)
 */

void print_rev(char *s)
{
	int c = 0;
	while (s[c]!= '\n')
	{
	c++;
	}
	for ( c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
