#include "main.h"

/**
 * _strcmp - compares to strings
 * @s1: input value
 * @s2: input value
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
	return (0);
	}
	else if (s1[i] < s2[i])
	{
	return (-15);
	}
	else
	{
	return (15);
	}
}
