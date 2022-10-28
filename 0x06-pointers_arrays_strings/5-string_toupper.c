#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @strs: Char to changeto upper
 *
 * Return: result of function
 */
char *string_toupper(char *strs)
{
	int a;

	for (a = 0; strs[a] != '\0'; a++)
	{
		if (strs[a] >= 'a' && strs[a] <= 'z')
		{
			strs[a] = strs[a] - 32;
		}
	}
	return (strs);
}
