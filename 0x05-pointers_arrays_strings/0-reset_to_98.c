#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * @n: Operand to be printed
 * Description: Function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int i;

	*n = 98;
	n = &i;
}
