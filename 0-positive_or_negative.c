#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Function to determine +ve or -ve nos
 * @n: First Operand
 *
 * Description: It determines -ve and +ve numbers
 *
 * Return: returns 0, signifies success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
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
