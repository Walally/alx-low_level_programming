#include "main.h"
/**
 * string_toupper - takes a pointer to a string 'str'
 * str: a character string
 * Return: string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	if (*p >= 'a' && *p <= 'z')
	{
		*p = *p - 32;
	}
	p++;
	}
	return (str);
}
