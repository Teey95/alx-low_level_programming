#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to first node in the list
 * @n: data to insert in the new node
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *NEW;
NEW = malloc(sizeof(listint_t));
if (!NEW)
return (NULL);
NEW->n = n;
NEW->next = *head;
*head = NEW;
return (NEW);
}
