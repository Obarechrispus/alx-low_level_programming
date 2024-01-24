#include "3-calc.h"

/**
 *get_op_fun - the function get operations and compares the operation
 *@s: contain the numbers
 *Return: null
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op != NULL)
		{
			if (strcmp(s, ops[i].op) == 0)
				return ops[i];
			i++;
		}
	return NULL;
}
