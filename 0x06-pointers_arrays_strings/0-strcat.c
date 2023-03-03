#include "main.h"

/**
 * _strcat - concatenates string pointed by @src,
 * including the null byte to the end of the string pointed by @dest
 * @dest: A pointer to the string to be concatenated
 * @src: source string to be appended
 *
 * Return: pointer to destinaton string @desc
*/
char *_strcat(char *dest, const chr *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
