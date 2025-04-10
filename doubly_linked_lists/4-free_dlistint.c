#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t linked list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
