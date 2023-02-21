#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m;

	for (n = 12; n <= 20; n++)
	{
		for (m = 13; m <= 21; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 20 || m != 21)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}	
	putchar('\n');
	return (0);
}
