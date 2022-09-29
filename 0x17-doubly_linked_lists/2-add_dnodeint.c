#include"lists.h"

/**
 * add_dnodeint - adds a node to a list at the beginning of doubly linked list
 *
 * @head: pointer to the head of the list
 * @n: the new data to be inserted
 * Return: a pointer to the head of the new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;
	if (h != NULL)
		h->prev = new;

	*head = new;
	
	return (*head);
}
