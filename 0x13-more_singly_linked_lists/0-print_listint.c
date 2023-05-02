#include "lists.h"

/**
 * print_listint - Will print all the elements of a linked list
 * @node: The linked list of type listint_t to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nums = 0;

	while (node)
	{
		printf("%d\n", node->n);
		nums++;
		node = node->next;
	}

	return (nums);
}
