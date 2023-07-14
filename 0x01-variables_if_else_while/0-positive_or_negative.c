#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
/*
 * we gonna use if statment
 * to determain if the number is positive negative
 * all gonna be inside main function
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("the number %d is greater than 0\n", n);
	}
	else if (n == 0)
	{
		printf("the number %d is 0\n", n);
	}
	else
	{
		printf("the number %d is negative\n", n);
	}
	return (0);
}
