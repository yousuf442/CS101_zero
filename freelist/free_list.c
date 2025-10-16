#include"headerfile.h"
/*
 * free_list - free a list
 *
 * @head: pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
	p = head;
	head = head->next;
	free(p->str);
	free(p);
	}
}
