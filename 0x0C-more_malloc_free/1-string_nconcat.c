#include "main.h"

/**
 *string_nconcat - concanate
 *@s1: character
 *@s2: chararacter
 *@n:  nth 
 *Return: null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int x = strlen(s1);
	int y = strlen(s2);
	char *ptr;

	n = x + y + 1;
	ptr = calloc(n, sizeof(char));
	for (i = 0; i < x; i++)
		ptr[i] = s1[0];
	for (i = 0; i < y; i++)
		ptr[x + i] = s2[i];

	ptr[n-1] = '\0';
	return (ptr);
	return (0);

}
