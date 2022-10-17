#include <stdio.h>

/**
 * main - Print all possible combination of numbers
 *
 * Description: Function prints all possible combinations of single-digits
 *
 * Return: returns 0 if program is successful
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
