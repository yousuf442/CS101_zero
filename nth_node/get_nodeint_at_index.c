#include"headerfile.h"
/*
 * *get_nodeint_at_index - checkes the code
 *
 * Return: the wanted node
 */
list_t *get_nodeint_at_index(list_t *head, unsigned int index)
{
	list_t *p = head;

	while (p != NULL)
	{
		index--;
		if (index == -1)
			break;
		p = p->next;
	}
	return (p);
}
