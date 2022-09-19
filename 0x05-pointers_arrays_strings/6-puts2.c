#include "main.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (str[i] == '\\' | str[i] == '\0')
			break;
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
