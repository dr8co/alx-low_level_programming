#include<stddef.h>
#include<stdlib.h>
#include "main.h"

/**
 * create_array: Create an array of characters.
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the character array (success)
 * or NULL if size is 0 or if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
