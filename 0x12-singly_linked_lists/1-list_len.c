#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - function that provides the number of elements in a linked list.
 * @h: pointer to singlt link list.
 *
 * Return: number of elements. *
 */

size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h != NULL)
	{
		h = h->next;
		y++;
	}
	return (y);
}
