#include "main.h"

/**
 * puts2 - is a function that prints every other character of
 * a string, starting with the first character,
 * followed by a new line.
 *
 * @str: string for printing to stdout
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
		if (str[i - 1] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}

