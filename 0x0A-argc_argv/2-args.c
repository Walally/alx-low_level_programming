#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it received
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

			return (0);
}
