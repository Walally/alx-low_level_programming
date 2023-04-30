#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
	if (new->str != NULL)
		printf("[%d] %s\n", new->len, new->str);
	else
		printf("[0] (nil)\n");
			count += 1;
			new = new->next;
	}
	return (0);
}
