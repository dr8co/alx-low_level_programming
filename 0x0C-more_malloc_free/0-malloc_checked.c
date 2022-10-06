#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: the size of the memory to be allocated
 * 
 * Return: a pointer to the allocated memory (SUCCESS) or normal termination error (FAIL)
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}