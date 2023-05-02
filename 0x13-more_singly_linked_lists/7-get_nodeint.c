#include "lists.h"

/**
 * get_nodeint_at_index - will return the node at an index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to a node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temps = head;

	while (temps && j < index)
	{
		temps = temps->next;
		j++;
	}

	return (temps ? temps : NULL);
}
