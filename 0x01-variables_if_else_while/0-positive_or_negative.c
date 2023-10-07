#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * Description: a program that print
 * a new number every it is been
 * executed
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
