#include "main.h"

/**
 * set_bit - will set a bit at a given index to 1
 * @n: the pointer to the number to change
 * @index: Index of the bit to set to 1
 *
 * Return: 1 is success, -1 is failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
