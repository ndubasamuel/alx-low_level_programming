#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: string
 * 
 * Return: if 0 (successful)
 */

int _strlen_recursion(char *s)
{
	int helloalx = 0;

	if(*s)
	{
		helloalx++;
		helloalx += _strlen_recursion(s + 1);

	}

	return(helloalx);
}
