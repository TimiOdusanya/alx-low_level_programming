#include <stdio.h>

/**
 * main - Prints alphabets
 *
 * Description: Prints alphabets in lower and upper case respectively
 *
 * Return: returns 0 if program is successful
 */
int main(void)
{
	int i;
	int j;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	j = 65;
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
