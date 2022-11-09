#include <stdio.h>

/**
 * positive_or_negative - Function to determine n'sign
 *
 * Description: To determine if n has a +ve or -ve value
 * Return: 0 means success
 */
int positive_or_negative(void)
{
	int n = 0;

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
