#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings: ...
 *@separator: ......
 *@n: .....
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *string;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		string = va_arg(args, const char *);
		if (string  != NULL)
		printf("%s", string);
		else
			printf("nil");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");

}
