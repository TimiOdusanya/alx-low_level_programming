#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function to determine n'sign
 *
 * Description: To determine if n has a +ve or -ve value
 * Return: 0 means success
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
