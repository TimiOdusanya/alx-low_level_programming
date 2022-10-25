#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: Value to be swapped
 * @b: Value to be swapped with
 *
 * Return: void;
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*a = *b;
	*b = i;
}
