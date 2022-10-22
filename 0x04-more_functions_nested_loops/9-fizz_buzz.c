#include "main.h"
#include <stdio.h>

/**
 * main - Ap rogram that prints out FizzBuzz
 *
 * Description: Prints FIzz if 3 annd Buzz if 5 and FizzBuzz if 15 till 100
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
