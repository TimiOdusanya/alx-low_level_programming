#include <stdio.h>

/**
 * main - All possible combination of digits
 *
 * Description: Possible combinations of two digits
 *
 * Return: success returns 0
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 58;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}

		i++;
	}
	putchar(10);
	return (0);
}