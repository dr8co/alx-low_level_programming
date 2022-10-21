#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed.
 */

void rev_string(char *str)
{
	char *t = str;
	char n[1000];
	short c = 0;

	while (*str != '\0')
	{
		n[c] = *str;
		s++;
		c++;
	}
	c = 0;

	while (str > t)
	{
		s--;
		*str = n[c];
		c++;
	}
}
