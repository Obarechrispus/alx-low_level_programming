#include "function_pointers.h"
/**
 *print_name - the function
 *@name: the container
 *@f: the variable
 *Return: null
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL) 
	f(name);
}
