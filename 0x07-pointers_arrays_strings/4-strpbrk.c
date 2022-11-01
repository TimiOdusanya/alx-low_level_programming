#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string s
 * @accept: string accept
 *
 * Return: s and NULL if 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
