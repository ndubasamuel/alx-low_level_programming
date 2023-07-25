#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:  string
 * Return: string length
 */

int _strlen(char *s)
{
	int bro = 0;

	while (*s != '\0')
	{
		bro++;
		s++;
	}

	return (bro);
}
