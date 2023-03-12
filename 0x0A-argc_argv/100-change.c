#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: return 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	printf("%d\n", coins);

		return (0);
}
