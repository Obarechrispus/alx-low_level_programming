#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase characte
 * Return: Always 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
