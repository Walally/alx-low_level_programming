#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalize the string characters
 * @str: input string values
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	str[0] = toupper(str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			if (str[i + 1] != '\0')
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
		i++;
	}
		return (str);
}
