#include "lists.h"

/**
 * add_nodeint - adds a node to the beggining of the listint_t
 * list
 * @head: a double pointer to the head of the linked list
 * @n: an integer value to be added
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest_node = malloc(sizeof(listint_t));

	if (latest_node == NULL)
		return (NULL);

	latest_node->n = n;
	latest_node->next = *head;
	*head = latest_node;

	return (latest_node);
}
