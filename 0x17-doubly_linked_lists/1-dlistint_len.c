#include"lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 *
 * @h: pointer to the head of a doubly linked list
 *
 * Return: the length of a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
