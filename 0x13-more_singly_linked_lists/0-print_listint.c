#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *new_node = h;
	size_t count = 0;

	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		new_node = new_node->next;
		count++;
	}
		return (count);
}
