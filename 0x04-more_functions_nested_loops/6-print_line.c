#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: first operand
 * Description: Draws a straight line in the temrinal
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
