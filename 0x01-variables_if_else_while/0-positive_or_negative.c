#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Determine if randomly generated number is postive, negative or zero
 * return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 2)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
