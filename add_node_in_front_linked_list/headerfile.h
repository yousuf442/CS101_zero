#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
list_t *add_node(list_t **head, const char *string);
size_t print_list(const list_t *h);
#endif
