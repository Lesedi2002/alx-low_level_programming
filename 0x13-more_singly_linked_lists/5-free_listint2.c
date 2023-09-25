#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		listint_t *temp;
		temp = (*head);
		free(temp);
		(*head) = (*head)->next;
	}
	(*head) = NULL;
}
