#include "main.h"

/**
 * void print_alphabet(void) - entry point
 *
 * Description: Prints the alphabet with _putchar
 */


void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
