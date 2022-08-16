#include"lists.h"

/**
 * pop_listint - pops the head
 * @head: pointer to the head of a list
 * Return: the first element
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = *head->n;

	temp = *head->next;
	free(*head);
	*head - temp;

	return (n);
}
