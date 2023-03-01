#include "main.h"
/**
 * _strncat - concatenate the strings
 * @n: maximum number of characters to copy from 'src' to 'dest'
 * @dest: string to concatenate
 * @src: string to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}
	i = 0;

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';

	return (dest);
}
