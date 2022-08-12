#include "lists.h"


/**
* add_node_end - Adds a new node to the end of the list
* @head: The head of the list
* @str: The string to be added
* Return: Returns the address of the new node or null
* if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t len;
	int i;
	list_t *node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0, len = 0; str[i] != '\0'; i++)
		len++;

	new->str = strdup(str);
	new->len = len;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	node = *head;

	for (i = 0; node->next != NULL; i++, node = node->next)
	{
		continue;
	}

	node->next = new;
	return (new);
}
