#include "main.h"

/**
 * _strncpy - A  function that copies a string.
 * @dest: First pointer
 * @src: second pointer
 * @n: First int
 *
 * Return: result of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
