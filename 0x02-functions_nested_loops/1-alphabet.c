#include "main.h"
/**
         *main- 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
	 *returns always (0)
*/
#include <stdio.h>

int main(void)
{
	int x;
	for (x='a'; x<='z'; x++)
		{
			putchar(x);
			putchar('\n');
		}
	return (0);
}
