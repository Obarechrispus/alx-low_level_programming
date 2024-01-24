#include "3-calc.h"

int main (int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if ((op[0] == '/' || op [0] =='%') && num2 == 0)
	{
		printf("Error\n");
		exit (100);
	}
	if (func == NULL)
	{
		printf("Error\n");
		exit (99);
	}

	int result = func(num1, num2);
        int (*func)(int, int) = get_op_func(op);
	
	return (0);
}
