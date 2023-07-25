#include "main.h"

/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string -1)/2
 * @str: input
 * Return: half of string
 */

void puts_half(char *str)
{
	int v, w, golf;

	golf = 0;

	for (v = 0; str[v] != '\0'; v++)
		golf++;

	w = (golf / 2);

	if ((golf % 2) == 1)
		w = ((golf + 1) / 2);

	for (v = w; str[v] != '\0'; v++)
		_putchar(str[v]);
	_putchar('\n');
}
