#include "lists.h"

/**
 * add_nodeint_end - prints the latest node to the linked
 * listint_t list
 * @n: an integer value to be added to the linked list
 * @head: a double pointer to the head of the linked list
 *
 * Return: the address of the new element added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest_node;
	listint_t *cursor = *head;

	latest_node = malloc(sizeof(listint_t));
	if (latest_node != NULL)
	{
		latest_node->n = n;
		latest_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;

		cursor->next = latest_node;
	}
	else
		*head = latest_node;
	return (latest_node);
}
