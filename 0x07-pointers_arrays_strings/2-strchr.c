#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 */

char *_strchr(char *s, char c)
{
	int legnth = strlen(s);
	int i;

	for (i = 0; i < legnth; i++)
	{
		if (s[i] == c)
		{
		return s;
		}
		else 
		{
		return (NULL);
		}
	}
	return (s);
}
