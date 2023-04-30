#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for the program
 * @argc: number of command-line arguments it recieved
 * @argv: array of command-line arguments
 * Return: 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j]; j++)
	}
	if (!isdigit(argv[i][j]))
	{
		printf("Error\n");
			return (1);
	}
	{
	sum += atoi(argv[i]);
	}
	printf("%d\n" sum);
	return (0);
}
