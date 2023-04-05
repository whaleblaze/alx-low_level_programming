#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of list
 *
 * Description: the function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
