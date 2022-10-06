#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory using malloc
 * @b: the size of the memory to be allocated (in bytes)
 * 
 * Return: a pointer to the allocated memory (SUCCESS)
 * Or normal termination error (FAIL)
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL || s == 0)
		exit(98);

	return (s);
}
