#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to string to be modified
 *
 * Return: pointer to the modified string
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
