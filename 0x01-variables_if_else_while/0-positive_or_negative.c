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
		printf("the number is greater than\n");
	}
	else if (n == 0)
	{
		printf("the numberis 0\n");
	}
	else
	{
		printf("the number is negative\n");
	}
	return (0);
}
