#include "main.h"

/**
 * main - Fnunction that prints _putchar
 *
 * Description: Prints _putchar followed by a new line
 *
 * Return: Returns 0 if program is successful
 */
int main(void)
{
	char text[8] = "_putchar";


	for (int i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
