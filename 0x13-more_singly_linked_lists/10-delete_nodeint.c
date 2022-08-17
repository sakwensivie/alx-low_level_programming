#include"lists.h"

/**
 * delete_nodeint_at_index - deletes the element by index
 * @head: address of a pointer to the list
 * @index: index to be deleted
 * Return: 1 if success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	for (count = 0; head && count < index; count++)
	{
		temp = *head;
		*head = (*head)->next;
	}

	if (count < index)
		return (-1);

	temp->next = (*head)->next;
	free(*head);

	return (1);
}
