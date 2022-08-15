#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a given
*                           index of a listint_t list.
* @head: A pointer to the address of the
*        head of the listint_t list.
* @index: The index of the node to be deleted - indices start at 0.
* Return: On success - 1.
*         On failure - -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp = *head;
	unsigned int con;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (con = 0; con < (index - 1); con++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	del = temp->next;
	temp->next = del->next;
	free(del);
	return (1);
}
