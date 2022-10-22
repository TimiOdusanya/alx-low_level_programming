#include "math.h"
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
	long int i;
	long int j;

	num = 612852475143;
	j = -1;

	while (num % 2 == 0)
	{
		j = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			j = i;
			num = num / 1;
		}
	}

	if (num > 2)
		j = num;
	printf("%ld\n", j);

	return (0);
}
