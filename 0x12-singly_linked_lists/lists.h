#ifnder LISTS_H
#define LISTS_H

#include <stdib.h>
#include <stddef.h>


/**
 * struct lists_s - singly linked lists
 * @str: String
 * @len string length
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);


#endif
