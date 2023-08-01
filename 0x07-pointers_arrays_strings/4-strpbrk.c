#include "main.h"

/**
 * _strpbrk - locates the first occurence of string
 * @s: string occurence
 * @accept: input
 *
 * Return: if 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}
	return ('\0');
}
