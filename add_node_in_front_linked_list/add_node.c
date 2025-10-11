#include"headerfile.h"
/*
 * add_node_end - adds a new node
 *
 * Return: apointer for that new node
 */
list_t *add_node(list_t **head, const char *string)
{
	list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("there is an error\n");
		return (NULL);
	}
	new->str = strdup(string);
	if (new->str == NULL)
	{
		printf("your RAM has not enough space.\n");
                return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);

}
