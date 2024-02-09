#include <stdio.h>
/**
 *mask - ...
 *@n: prints the binary representation
 *
 *
 *Return: ...
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	unsigned long int bit;
	unsigned long int flag = 0;

			for (bit = 0; bit < sizeof(unsigned long int) * 8; bit++)
	{
			if (n & mask)
			{
			putchar('1');
			flag = 1;
			}
			else if (flag || bit == sizeof(unsigned long int) * 8 - 1)
				{
			putchar('0');
				}
				mask >>= 1;
	}
}
