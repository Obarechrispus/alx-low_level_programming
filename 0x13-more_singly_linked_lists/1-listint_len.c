#include "lists.h"
/**
 *listint_len - entry
 *@h: ...
 *
 *Return: x
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;
	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
