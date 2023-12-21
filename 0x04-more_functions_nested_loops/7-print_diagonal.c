#include "main.h"
/**
*print_diagonal - prints a diagonal
*Return:returns 0
*/
void print_diagonal(int x)
{
int y, z;
if (x > 0)
{
for (y = 0; y < x; y++)
{
for (z = 0; z < y; z++)
_putchar(' ');

_putchar('\\');

if (y == (x - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
