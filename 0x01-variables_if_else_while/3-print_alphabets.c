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

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	i = 65;
	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	putchar(10);
}
