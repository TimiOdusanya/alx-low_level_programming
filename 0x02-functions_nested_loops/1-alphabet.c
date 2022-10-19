#include "main.h"

/**
 * print_alphabet - Print alphabets in lowecase
 *
 * Description: Function to print alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
