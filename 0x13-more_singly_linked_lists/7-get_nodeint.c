#include "lists.h"
/**
 * get_nodeint_at_index - returns node at a certain index in linked list
 * @head: first node in the linked list
 * @index: index of node to return
 * Return: pointer to the node we are searching for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int p = 0;
listint_t *T = head;
while (T && p < index)
{
T = T->next;
p++;
}
return (T ? T : NULL);
}
