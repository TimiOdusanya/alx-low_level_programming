#include <stdio.h>

/**
 * main - Function to print alphabets
 *
 * Description: Prints alphabets from a - z in lowercase
 * Return: program returns 0 if successful
 */
int main(void)
{
	int i;
	for(i = 97; i <= 122; i++)
	{
		putchar(i);
		putchar(10);
	}
}
