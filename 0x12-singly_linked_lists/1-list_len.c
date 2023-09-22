#include "lists.h"
/*
 * list_len - function to get length of node
 * @h: pointer to nodes
 * Return: Always succesful
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
