#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @num: just a number
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	unsigned int num;
	struct list_s *next;
} list_t;
list_t *add_nodeint_end(list_t **head, unsigned int number);
size_t print_list(const list_t *h);
void free_list(list_t **head);
list_t *get_nodeint_at_index(list_t *head, unsigned int index);
#endif
