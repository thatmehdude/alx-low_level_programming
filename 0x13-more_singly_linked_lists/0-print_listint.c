#include "lists.h"
/**
 * print_listint - prints elements of the list
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnodes;

	numnodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
