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

	while ((*head)->prev != NULL)
		*head = (*head)->prev;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	*head = new;

	return (*head);
}
