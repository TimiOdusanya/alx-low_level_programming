#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @strs: string
 *
 * Return: result of strs
 */
char *rot13(char *strs)
{
	char *alpha_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *alpha_2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int a, b;

	for (a = 0; strs[a] != '\0'; a++)
	{
		for (b = 0; alpha_1[b] != '\0'; b++)
		{
			if (strs[a] == alpha_1[b])
			{
				strs[a] = alpha_2[b];
				break;
			}
		}
	}
	return (strs);
}
