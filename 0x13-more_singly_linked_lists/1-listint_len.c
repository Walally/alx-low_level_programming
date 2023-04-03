#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked listint_t list
 * @h: a pointer to the first node of the list
 *Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *new_node = h;
	size_t count = 0;

	while (new_node != NULL)
	{
		new_node = new_node->next;
		count++;
	}
	return (count);
}
