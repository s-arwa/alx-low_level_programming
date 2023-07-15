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
		printf("Last digit of %d is %d and is greater than 5 \n", n, A);
	}
	if (A == 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, A);
	}
	else
	{
		printf("Last digit of %d is %d and is 0 \n", n, A);
	}
	return (0);
}
