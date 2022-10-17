#include <stdio.h>

/**
 * main - Prints all single digits number
 *
 * Description: Prints all single digits of base 10 from 0
 *
 * Return: 0 is returned if program run successfully
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
