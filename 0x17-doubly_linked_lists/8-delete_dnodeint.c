#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t linked list.
 * @head: Pointer to pointer to the head of the list
 * @index: Index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (*head == NULL) // Check if the list is empty
        return -1;

    dlistint_t *current = *head;
    unsigned int i;

    // Traverse the list to find the node at the given index
    for (i = 0; current != NULL && i < index; i++) {
        current = current->next;
    }

    // If the index is out of bounds
    if (current == NULL)
        return -1;

    // If the node to be deleted is the head
    if (current == *head) {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
    } else {
        // Adjust pointers to skip the node to be deleted
        current->prev->next = current->next;
        if (current->next != NULL)
            current->next->prev = current->prev;
    }

    // Free memory occupied by the node
    free(current);

    return 1; // Return 1 indicating success
}

