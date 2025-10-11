#include"headerfile.h"
/*
 * add_node_end - adds a new node in the end of the linked list
 *
 * Return: apointer for that new node
 */
list_t *add_node_end(list_t **head, const char *string)
{
	list_t *new = malloc(sizeof(list_t));

	list_t *end;

	if (*head == NULL)
	{
		end = NULL;
		new->str = strdup(string);
		new->len = strlen(new->str);
		new->next = NULL;
		end = new;
		*head = new;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		new->str = strdup(string);
                new->len = strlen(new->str);
		new->next = NULL;
		end->next = new;
		end = new;
	}
}
