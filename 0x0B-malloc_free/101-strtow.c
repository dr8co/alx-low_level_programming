#include <stdlib.h>
#include "main.h"

/**
 * count - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */

int count(char *str)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	char **array, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	array[k] = NULL;

	return (array);
}
