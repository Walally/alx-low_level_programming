#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: a pointer to the address of the listint_t list
*
* Return: 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int retan;

	if (*head == NULL)
		return (0);

	temp = *head;
	retan = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (retan);
}
