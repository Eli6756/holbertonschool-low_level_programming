#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to the head pointer of the list
 * @idx: index where the node should be inserted
 * @n: value to insert
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL || (temp->next == NULL && i + 1 < idx))
return (NULL);

if (temp->next == NULL)
return (add_dnodeint_end(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;

temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
