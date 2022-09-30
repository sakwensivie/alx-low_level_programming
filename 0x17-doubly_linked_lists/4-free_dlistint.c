#include"lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: pointer to the list
 *
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while ((temp = head) != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
