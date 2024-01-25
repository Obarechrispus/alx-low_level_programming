#include <stdarg.h>
#include <unistd.h>
#include "variadic_functions.h"
/**
 * _putchar - writes a character to the standard output
 * @c: character to write
 * Return: number of characters written (1) or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *print_numbers - ...
 *@separator: ...
 *@n: ...
 *
 *
 *Return: ...
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (i > 0 && separator != NULL)
		{
			const char *sep = separator;

			if (sep != NULL)
				while (*sep != '\0')
				{
					_putchar(*sep);
					sep++;
				}
			_putchar(*sep);
		}
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num == 0)
			_putchar('0');
		while (num > 0)
		{
			int digit = num % 10;

			_putchar(digit + '0');
			num /= 10;
		}
	}
	_putchar('\n');
}
