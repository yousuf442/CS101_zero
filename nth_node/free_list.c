#include"headerfile.h"
/*
 * free_list - free a list
 *
 * Return: nothing
 */
void free_list(list_t **head)
{
	if (*head != NULL)
	{
	list_t *p;

	while (*head != NULL)
	{
	p = *head;
	*head = (*head)->next;
	free(p);
	}
	}
}
