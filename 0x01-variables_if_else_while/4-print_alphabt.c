#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Description: Prints all in lowercase except q and e
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return (0);
}
