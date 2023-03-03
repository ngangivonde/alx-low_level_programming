#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be print
 * Return: 1 on success
 * On error, -1 is returned, errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
