#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: is the string
 * Returns: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

