#include "main.h"

/**
 * puts2 - prints every other character startin with the first
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int alexa = 0;
	int b = 0;
	char *n = str;
	int o;

	while (*n != '\0')
	{
		n++;
		alexa++;
	}
	b = alexa - 1;
	for (o = 0; o <= b; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

