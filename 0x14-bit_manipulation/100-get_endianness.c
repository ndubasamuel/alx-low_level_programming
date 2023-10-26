#include "main.h"

/**
 * get_endianness - hecks if a machineis little or big endian
 * Return: 0 for bit, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = i;
	char *c = (char *) &i;

	return(*c);
}
