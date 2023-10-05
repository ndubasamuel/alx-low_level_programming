#include "main.h"

/**
 * _memset - fills outlined mamory with a constant byte
 * @s: pointer memory of block to be filled
 * @b: desired value
 * @n: memory bytes
 *
 * Return: the number of bytes to be changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
