#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor (j is max)
 *
 * Description: prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	long int num;
	long int quotient;
	long int divisor;

	num = 612852475143;

	quotient = num;
	divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}

	printf("%li\n", quotient);

	return (0);
}
