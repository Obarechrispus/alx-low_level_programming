#include "main.h"
/**
 *main - prints the number of count
 *argc: counts of argument
 *argv: the string vecto
 *@argc: counts of argument
 *@argv: the string vecto
 *Return: null
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int y;
	unsigned int sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (y = 0; y < strlen(e); y++)
			{
				if (e[y] < 48 || e[y] > 57)
				{
					printf("Error/n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
