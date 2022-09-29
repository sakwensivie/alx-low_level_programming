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
	dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		printf("%d", temp->n);
		temp = temp->next;
		count++;
	}
	
	return (count);
}
