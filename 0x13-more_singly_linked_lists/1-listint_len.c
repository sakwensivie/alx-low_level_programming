#include"lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: a pointer to the head of a linked list
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
