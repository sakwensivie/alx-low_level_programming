#include"lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: address of the head of a linked list
 * Return: pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	return (next);
}
