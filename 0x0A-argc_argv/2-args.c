#include <stdio.h>
#include "main.h"

/**
 * main - prints all received arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: if 0(success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}

	return (0);
}
