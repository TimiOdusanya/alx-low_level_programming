#include "main.h"
#define NULL 0

/**
 * _strchr - a function that locates a character in a string.
 * @s: string s
 * @c: character c
 *
 * Return: a pointer to the first occurrence of c
 * NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	if (c == '\0')
		return (&s[a]);
	return (NULL);
}
