#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s.
 * @s:pointer s
 * @b:constant byte
 * @n:number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
