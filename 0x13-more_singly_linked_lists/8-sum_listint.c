#include "lists.h"
/**
 * sum_listint - calculates the sum of the data in a listint_t list
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *T = head;
while (T)
{
sum += T->n;
T = T->next;
}
return (sum);
}
