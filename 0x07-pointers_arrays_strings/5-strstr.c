#include "main.h"
#define NULL 0

/**
 * _strstr - a function that locates a substring.
 * @haystack: string 1
 * @needle: string 2
 *
 * Return: a pointer and NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	char *p;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		a = 0; /* restting a*/
		p = haystack; /*restting p */
		while (*p == needle[a])
		{
			a++;
			p++;
			if (needle[a] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
