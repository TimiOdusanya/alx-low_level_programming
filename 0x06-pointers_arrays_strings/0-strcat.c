include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: Operand 1
 * @src: Operand 2
 *
 * Return: Result of the string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i];
	}

	for (j = 0; j < i && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
