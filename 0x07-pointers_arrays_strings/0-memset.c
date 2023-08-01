#include "main.h"

/**
 * _memset - fills an outlined mamory with a constant byte 
 * @s: pointer memory of block to be filled
 * @b: desired value
 * @n: memory bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i<n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
