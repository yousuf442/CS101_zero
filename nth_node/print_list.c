#include"headerfile.h"
/**
 * print_list - counts number of nodes
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (1);
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		printf("[%u]\n", h->num);
		h = h->next;
	}
	printf("%u elements\n", n);
	return (n);
}
