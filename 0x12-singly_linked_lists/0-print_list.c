#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list(pointer to the start of the list_t)
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	int n=0;

	for (h != NULL; n++)
	{
		if (h -> str == NULL)
		{
			printf("[%d} %s\n", 0, "(nil)");
			h = h -> next;
		}
		else
		{
			printf("[%d]" %s\n", h ->len, h ->str);
			h = h ->next;
		}
	}
	return (n);
}			
