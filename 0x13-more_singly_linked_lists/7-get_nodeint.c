#include"lists.h"

/**
 * get_nodeint_at_index  - a function that returns the nth node in a list
 * @head: pointer to the head of the list
 * @index: the index to be deleted
 * Return: a pointer to the new list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	for (count = 0; head && count < index; count++)
	{
		head = head->next;
	}
	if (count < index)
		return (NULL);

	return (head);
}
