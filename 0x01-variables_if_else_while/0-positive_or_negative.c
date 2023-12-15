#include <stdio.h>
#include <time.h>

         /**
	  * main - assign a random number to the variable n each time it is executed
	  * Return - always 0
	 */
 int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n>0)
	       	{
			printf("is positive");
		}
		if (n<0) 
		{
			printf("is negative");
		}
		if (n=0)
		{
		        printf("is zero");
		}
	return 0;
}	
