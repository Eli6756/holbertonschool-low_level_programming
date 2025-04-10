#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a specific index in a doubly linked list
 * @head: pointer to the head node
 * @index: index of the node to retrieve (starting at 0)
 *
 * Return: pointer to the node at that index, or NULL if index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}

return (NULL);
}
