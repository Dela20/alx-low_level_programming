#include "main.h"

/**
 * get_bit - will return the value of a bit at an index in a decimal number
 * @n: the number to search
 * @index: Index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
		return (-1);

	bits = (n >> index) & 1;

	return (bits);
}
