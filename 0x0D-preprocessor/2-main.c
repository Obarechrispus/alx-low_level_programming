#include <stdio.h>

/**
 *main - entry point
 *@void: zero
 *Return: zeor
 */
int main(void)
{
	char *file = __FILE__;

	for (; *file != '\0'; file++)
	{
		putchar (*file);
	}
	putchar('\n');
	return (0);
}

