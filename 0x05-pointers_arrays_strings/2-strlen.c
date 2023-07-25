#include "main.h"

/**
 * _strelen - provides the length of the string
 * @S: is the string
 * Return: String length (S)
 */

int _strlen(char *S)
{
	int len = 0;

	while (S[len] != '\0')
	{
		len++
	}

	return (len);
}
