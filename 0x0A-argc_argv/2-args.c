#include "main.h"

/**
 *main - function
 *@argc: gets count
 *@argv: strings
 *Return: zero
 */

int main(int  argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
