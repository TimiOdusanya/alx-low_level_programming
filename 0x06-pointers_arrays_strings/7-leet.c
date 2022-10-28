#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: char variable
 *
 * Return: result of function
 */
char *leet(char *str)
{
	int a, b;
	char *alpha = "aeotlAEOTL";
	char *integer = "4307143071";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; alpha[b] != '\0'; b++)
		{
			if (str[a] == alpha[b])
				str[a] = integer[b];
		}
	}
	return (str);
}
