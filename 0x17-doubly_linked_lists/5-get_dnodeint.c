#include"lists.h"

/**
 * get_dnodeint_at_index - returns the node at a certain int
 *
 * @head: pointer to head of a list
 * @index: index of the node to retrieve
 *
 * Return: the node at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num_of_nodes, count;
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	temp = head;

	num_of_nodes = dlistint_len(head);

	if (index > num_of_nodes)
		return (NULL);

	for (count = 0; count < index; count++)
	{
		temp = temp->next;
	}

	return (temp);
}

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

	count = 0;

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
