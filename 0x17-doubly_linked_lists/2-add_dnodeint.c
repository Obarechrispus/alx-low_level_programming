#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
 *Return: the value of count
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new ==  NULL)
	{
		return NULL;
	}
	new ->n = n;
	new ->prev = NULL;
	new ->next = *head;

	if (*head != NULL)
	       (*head)	->prev = new;
	*head = new;
	return new;
}
