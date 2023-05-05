#include "main.h"

/**
 * get_endianness - will check if a machine is little or big endian
 * Return: 0 is big, 1 is little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
