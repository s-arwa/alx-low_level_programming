#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
/**
 * main -main
 * description
 * all gonna be inside main function
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is pisitive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is 0\n", n);
	}
	return (0);
}
