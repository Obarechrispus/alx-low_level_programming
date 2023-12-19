#include "main.h"

/**
 * _islower- gets lower cases
 * return: 1 for lowercase or 0 for others
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
