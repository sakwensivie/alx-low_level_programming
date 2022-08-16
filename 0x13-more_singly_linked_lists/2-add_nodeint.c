#include "lists.h"

/**
 * add_nodeint - adds a new element at the beginning of the list
 * @head: pointer to a pointer to the head
 * @n: new element
 *
 *Return: returns the new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
