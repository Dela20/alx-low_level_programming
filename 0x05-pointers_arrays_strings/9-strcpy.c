#include "main.h"
/**
 * char*_strcpy - a function to copy a string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int x = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	for (; x < w; x++)
	{
		dest[x] = src[x];
	}
	dest[w] = '\0';
	return (dest);
}
