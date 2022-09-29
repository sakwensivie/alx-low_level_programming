#include"lists.h"

/**
 * print_dlistint - prints the elements of the list
 * 
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	
	return (count);
}
