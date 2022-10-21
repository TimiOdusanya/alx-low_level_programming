#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * Description: Print numbers from 0 -9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
