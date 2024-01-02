#include "main.h"

/**
 * Entry: void _puts(char *str)
 * Write a function that prints a string, followed by a new line, to stdout
 * Return (0)
 */

void _puts(char *str)
{
	for (*str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
