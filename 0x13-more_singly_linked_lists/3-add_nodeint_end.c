#include"lists.h"

/**
 * add_nodeint_end - adds an element to the end of a list
 * @head: pointer to the first element
 * @n: new element to be added
 * Return: a pointer to the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;

	new - malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (new == NULL)
		return (NULL);

	while (*head)
	{
		*head = *head->next;
	}

	*head->next = new;

	*head = temp;

	return (*head);
}
