#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: a pointer to the memory area s
 * @b: constant byte b
 * @n: first byte
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
