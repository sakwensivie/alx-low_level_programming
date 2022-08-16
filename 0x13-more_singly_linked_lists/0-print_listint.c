#include"lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: a pointer to the head of the linked list
 * Return: returns the number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
