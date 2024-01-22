#include <stdio.h>

/**
 *main - entry point
 *
 *return: zeor
 */
int main ()
{
	char *file = __FILE__;
	for (; *file != '\0';file++)
	{
		putchar (*file);
	}
	putchar('\n');
	return (0);
}

