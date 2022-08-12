#include "lists.h"

/**
* print_list - Prints the element of a list
* @h: The head of the list
* Return: The number of nodes contained in the list
*/
size_t print_list(const list_t *h)
{
	size_t size;
	list_t *node;

	if (h == NULL)
		return (0);

	for (size = 0; size < 1; size++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	}

	if (h->next == NULL)
		return (size);

	node = h->next;

	for (; node != NULL; size++, node = node->next)
	{
		if (node->str != NULL)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
	}
	return (size);
}
