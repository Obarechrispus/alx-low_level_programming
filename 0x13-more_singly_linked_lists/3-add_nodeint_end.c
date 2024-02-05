#include "lists.h"
#include <stdlib.h>
/**add_nodeint_end - ...
 *@head: ...
 *@n: ...
 *
 *
 *
 *Return: ...
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
		while (current->next != NULL)
			current = current->next;
	current->next = new;
	return (new);
}
