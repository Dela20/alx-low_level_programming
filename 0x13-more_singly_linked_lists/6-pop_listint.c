#include "lists.h"

/**
 * pop_listint - will delete the head node of a linked list
 * @head: pointer to first element in the linked list
 *
 * Return: data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temps;
	int nums;

	if (!head || !*head)
		return (0);

	nums = (*head)->n;
	temps = (*head)->next;
	free(*head);
	*head = temps;

	return (nums);
}
