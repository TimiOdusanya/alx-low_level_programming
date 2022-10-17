#include <stdio.h>

/**
 * main - Function to print lowercase aplhabet in reverse
 *
 * Description: Program prints alphabets in lowercase in reverse
 *
 * Return: returns 0 if program is successful
 */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
