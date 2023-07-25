#include "main.h"

/**
 * _strelen - returns the length of a string
 * @S: is the string
 * Return: String length
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
