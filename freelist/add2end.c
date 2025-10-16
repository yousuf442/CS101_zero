#include"headerfile.h"
/*
 * add_node_end - adds a new node in the end of the linked list
 *
 * Return: apointer for that new node
 */
list_t *add_node_end(list_t **head, const char *string)
{
	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(string);
	if (new->str == NULL)
	return NULL;
        new->len = strlen(new->str);
        new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		list_t *end = *head;

		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
		end = new;
		return (end);
	}
}
