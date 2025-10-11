#include"headerfile.h"
/**
 * print_list - counts number of nodes
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
        unsigned int n = 0;
        while (1)
        {
                n++;
                printf("%s ", h->str);
                printf("[%u]\n", h->len);
                h = h->next;
                if (h == NULL)
                        break;
        }
        printf("%u elements\n", n);
	return (n);
}
