#include <stdio.h>

/**
 * main - Prints all numbers in base 16 in lowercase
 *
 * Description: All numbers of base 16 is printed in lowercase
 *
 * Return: returns 0 if program is successful
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	i = 97;
	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
