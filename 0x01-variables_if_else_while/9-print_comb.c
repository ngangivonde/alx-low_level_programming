#include <stdio.h>

/**
 * main - Prints all combinations of single digit numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 12; n < 22; n++)
	{
		putchar(n);
		if (n != 21)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
