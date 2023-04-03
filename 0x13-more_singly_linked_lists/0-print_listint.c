#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *currentnode = h;
	size_t count = 0;

	while (currentnode != NULL)
	{
	printf("%d\n", currentnode->n);
		count += 1;
		currentnode = currentnode->next;
	}
	return (count);
}
