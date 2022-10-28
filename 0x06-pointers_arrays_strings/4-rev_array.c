#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of ints
 * @a: First pointer
 * @n: FIrst Integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, b, tmp;

	for (b = n - 1; b > i; b--)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;
		i++;
	}
}
