#include "lists.h"
/**
 *free_listint - ...
 *@head: ...
 *
 *
 *
 *Return: ...
 */
void free_listint(listint_t *head)
{
        listint_t *list;

        while (head != NULL)
        {
                list = head;
                head = head->next;
                free(list);
        }
}
