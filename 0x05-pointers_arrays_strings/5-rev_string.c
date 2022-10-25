#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: Operand
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i = 0, j, len = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[len];
		s[len--] = tmp;
	}
}
