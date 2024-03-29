#include"lists.h"

/**
 * sum_listint - a function that calculates the sum of
 * all the elements in a list
 * @head: pointer to the list
 * Return: the sum of all elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
