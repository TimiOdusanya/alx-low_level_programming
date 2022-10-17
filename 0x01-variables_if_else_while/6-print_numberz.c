#include <stdio.h>

/**
 * main - Function to print single digit numbers
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 *
 * Return: returns 0 if successful
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
