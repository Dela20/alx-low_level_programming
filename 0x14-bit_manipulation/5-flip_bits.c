#include "main.h"

/**
 * flip_bits - will count the number of bits to change
 * to get from one number to another
 * @n: A first number
 * @m: A second number
 *
 * Return: A number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counts = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> i;
		if (current & 1)
			counts++;
	}

	return (counts);
}
