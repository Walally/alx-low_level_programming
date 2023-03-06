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
	for (unsigned int i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
