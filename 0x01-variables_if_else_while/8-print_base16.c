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

	j = 97;
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
