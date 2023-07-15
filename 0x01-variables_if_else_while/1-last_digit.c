#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;
	int A;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	A = n % 10;
	if (A > 5)
	{
		printf("%d is greater than 5\n", A);
	}
	if (A == 5)
	{
		printf("%d is zero\n", A);
	}
	else
	{
		printf("%d is less than 6 and not 0\n", A);
	}
	return (0);
}
