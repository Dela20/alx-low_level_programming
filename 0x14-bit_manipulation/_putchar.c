#include "main.h"
#include <unistd.h>
/**
 * _putchar - will write the character c to stdout
 * @c: character to print
 *
 * Return:  1 is success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
