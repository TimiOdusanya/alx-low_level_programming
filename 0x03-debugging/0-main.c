#include "main.h"

/**
 * main - Test to give the correct output when given a case of 0.
 *
 * Description: Test function
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero", n);
	}
		return (0);
}
