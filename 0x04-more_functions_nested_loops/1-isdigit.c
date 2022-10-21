#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: Operand to be checked
 * Description: Checks for a digit (0 through 9)
 *
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
