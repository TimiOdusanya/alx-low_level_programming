#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: Integer
 *
 * Return: returns result of concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

	for (j = 0; j < n  && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
