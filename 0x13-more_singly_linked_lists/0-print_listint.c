#include "lists.h"
/**
 *print_listint - entry
 *@h: the value of the node
 *Return: ...
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
