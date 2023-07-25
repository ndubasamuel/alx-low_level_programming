#include "main.h"


/**
 * print_rev prints a string in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int dev = 0;
	int o;

	while (*s != '\0')
	{
		dev++;
		s++;
	}
	s--;
	for (o = dev; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
