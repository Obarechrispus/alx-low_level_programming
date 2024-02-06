#include "lists.h"

int pop_listint(listint_t **head) {
    if (*head == NULL)
        return 0;

    int data = (*head)->n;
    listint_t *temp = *head;
    *head = (*head)->next;
    free(temp);
    return data;
}
