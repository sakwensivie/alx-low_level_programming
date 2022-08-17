#include"lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the index
 * @head: the address to a pointer that points to the list
 * @idx: the index to insert to
 * @n: the element to insert
 * Return: pointer to the first element of the augmented list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new, *first;

	if (*head == NULL)
		return (NULL);

	first = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	for (count = 0; (*head) && (count < idx); count++)
	{
		temp = *head;
		*head = (*head)->next;
	}
	if (count < idx)
		return (NULL);

	temp->next = new;
	new->next = *head;

	return (first);
}
