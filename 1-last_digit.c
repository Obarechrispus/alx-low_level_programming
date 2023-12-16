#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
 *program return  zero
*/

int mainn (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int x= n % 10;
	if (x>5){
		printf("The last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x<6 && x !=0){
		printf("The last digit of %d is %d and is less than 6 and not zero\n", n , x);
	}
	else {
		printf("The last digit of %d is %d and is zero\n", n, x);
	}
	retun (0);
}
