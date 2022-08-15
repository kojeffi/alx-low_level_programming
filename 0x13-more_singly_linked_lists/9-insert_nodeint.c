#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node to a listint_t
*                           list at a given position.
* @head: A pointer to the address of the
*        head of the listint_t list.
* @idx: The index of the listint_t list where the new
*       node should be added - indices start at 0.
* @n: The integer for the new node to contain.
* Return: If the function fails - NULL.
*         Otherwise - the address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int con;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (con = 0; con < (idx - 1); con++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
