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
	int cents, x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		x++;
		if ((cents - 25) >= 0)
		{
		cents -= 25;
		continue;
		}
		if ((cents - 10) >= 0)
		{
		cents -= 10;
		continue;
		}
		if ((cents - 5) >= 0)
		{
		cents -= 5;
		continue;
		}
		if ((cents - 1) >= 0)
		{
		cents -= 1;
		continue;
		}
		cents--;
	}
	printf("%d\n", x);
	return (0);
}
