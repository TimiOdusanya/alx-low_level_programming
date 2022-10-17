#include <stdio.h>

/**
 * main - Function to print alphabets
 *
 * Description: Prints alphabets from a - z in lowercase
 * Return: program returns 0 if successful
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
	putchar(10);
	return (0);
}
